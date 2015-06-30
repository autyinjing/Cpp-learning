// =====================================================================================
//
//       Filename:  _query.h
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月17日 16时58分27秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#ifndef         QUERY_H
#define         QUERY_H

#include <vector>
#include <string>
#include <map>
#include <set>
#include <memory>
#include <fstream>
#include <sstream>

using line_no = std::vector<std::string>::size_type;

class QueryResult;
class TextQuery
{
        public:
                TextQuery(std::ifstream &);
                QueryResult query(const std::string &);
        private:
                std::shared_ptr<std::vector<std::string>>       file;   //输入文件
                std::map<std::string,
                         std::shared_ptr<std::set<line_no>>>    wm;     //单词与行号set的map
};

class QueryResult
{
        friend std::ostream& print(std::ostream &, const QueryResult &);

        public:
        QueryResult(std::string s,
                    std::shared_ptr<std::set<line_no>> p,
                    std::shared_ptr<std::vector<std::string>> f) :
                sought(s), lines(p), file(f) { }
        std::shared_ptr<std::vector<std::string>> get_file()
        { return std::shared_ptr<std::vector<std::string>>(file); }
        std::set<line_no>::iterator     begin() { return lines->begin(); }
        std::set<line_no>::iterator     end() { return lines->end(); }

        private:
        std::string     sought; //要查询的单词
        std::shared_ptr<std::set<line_no>>      lines;  //出现的行号
        std::shared_ptr<std::vector<std::string>>       file; //指向要查询的文件
};

using std::ifstream;
using std::vector;
using std::string;
using std::istringstream;
using std::shared_ptr;
using std::endl;
using std::set;
using std::map;
using std::ostream;

//TextQuery类成员函数的定义
TextQuery::TextQuery(ifstream &infile) : file(new vector<string>)
{
        string  text;   //保存文件的每一行
        while (getline(infile, text))   //对每一行进行处理
        {
                file->push_back(text);
                istringstream   line(text);
                string  word;           //分解为每一个单词
                while (line >> word)
                {
                        auto    &lines = wm[word]; //如果单词第一次出现，返回一个空指针
                        if (!lines)
                                lines.reset(new set<line_no>);
                        lines->insert(file->size() - 1); //保存当前行号
                }
        }
}

QueryResult TextQuery::query(const string &word)
{
        //如果没有找到，返回一个指向空set的指针
        static  shared_ptr<set<line_no>>        nodata(new set<line_no>);
        auto    loc = wm.find(word);    //使用find避免将word添加到wm中
        if (loc == wm.end())
                return QueryResult(word, nodata, file); //未找到
        else
                return QueryResult(word, loc->second, file);
}

ostream &print(ostream &os, const QueryResult &qr)
{
        os << qr.sought << " ouccrs " << qr.lines->size()
                << ((qr.lines->size() > 1) ? " times" : " time") << endl;
        for (auto num : *qr.lines)      //对set中的每个单词
                os << "\t(line " << num + 1 << ") " 
                        << *(qr.file->begin() + num) << endl;
        //auto    beg = qr.begin(), end = qr.end();
        //while (beg != end)
        //        os << *beg++ << endl;
        return os;
}

#endif
