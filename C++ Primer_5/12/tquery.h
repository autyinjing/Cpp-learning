// =====================================================================================
//
//       Filename:  tquery.h
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月17日 15时16分10秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#ifndef         TQUERY_H
#define         TQUERY_H

#include <string>
#include <fstream>
#include <vector>
#include <map>
#include <set>
#include <memory>
#include <sstream>
#include "blob.h" 

using   line_no = std::vector<std::string>::size_type;

class QueryResult;
class TextQuery
{
        public:
                TextQuery(std::ifstream&);
                QueryResult query(const std::string&) const;
        private:
                std::shared_ptr<std::vector<std::string>>       file;   //输入文件
                //单词到行号的映射
                std::map<std::string, 
                         std::shared_ptr<std::set<line_no>>> wm;
};

class QueryResult
{
        friend std::ostream& print(std::ostream&, const QueryResult&);

        public:
        QueryResult(std::string s,
                    std::shared_ptr<std::set<line_no>> p,
                    std::shared_ptr<std::vector<std::string>> f) :
                sought(s), lines(p), file(f) { }
        std::set<line_no>::const_iterator begin() { return (*lines).cbegin(); }
        std::set<line_no>::const_iterator end() { return (*lines).cend(); }

        private:
        std::string     sought;         //要查询的单词
        std::shared_ptr<std::set<line_no>>      lines;  //行号
        std::shared_ptr<std::vector<std::string>>       file; //输入文件
};

using std::ifstream;
using std::vector;
using std::string;
using std::set;
using std::istringstream;
using std::shared_ptr;
using std::ostream;
using std::endl;

//TextQuery类的成员函数定义
TextQuery::TextQuery(ifstream &is) : file(new vector<string>)
{
        string  text;
        while (getline(is, text))               //对文件中的每一行
        {
                file->push_back(text);          //保存此行
                int     n = file->size() - 1;   //当前行号
                istringstream   line(text);     //将行文本分解为单词
                string  word;
                while (line >> word)
                {
                        auto    &lines = wm[word];
                        if (!lines) //第一次遇到这个单词时，lines为空
                                lines.reset(new set<line_no>); //分配一个新的set
                        lines->insert(n);       //插入行号
                }
        }
}

QueryResult TextQuery::query(const string &sought) const
{
        //如果未找到sought，返回一个指向此set的指针
        static shared_ptr<set<line_no>>         nodata(new set<line_no>);
        //使用find而不是下标来查找单词，避免将单词添加到wm中
        auto    loc = wm.find(sought);
        if (loc == wm.end())
                return QueryResult(sought, nodata, file); //未找到
        else
                return QueryResult(sought, loc->second, file);
}

ostream &print(ostream &os, const QueryResult &qr)
{
        //打印单词出现的次数和所有出现的位置
        os << qr.sought << " occurs " << qr.lines->size() << " "
                << ((qr.lines->size() > 1) ? "times" : "time") << endl;
        //打印单词出现的每一行
        for (auto num : *qr.lines)      //对set中的每个单词
                os << "\t(line " << num + 1 << ") "
                        << *(qr.file->begin() + num) << endl;
        /*auto    beg = qr.begin(), end = qr.end();
        while (beg != end)
                os << "\t(line " << *beg + 1 << ") "
                        << *(qr.file->begin() + *beg) << endl;*/
        return os;
}

#endif
