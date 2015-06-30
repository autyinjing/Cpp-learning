// =====================================================================================
//
//       Filename:  __query.h
//
//    Description:  
//
//        Version:  1.0
//        Created:  10/19/2014 05:38:00 PM
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
#include <memory>
#include <map>
#include <set>
#include <sstream>
#include <iostream>
#include <fstream>

using line_no = std::vector<std::string>::size_type;

class QueryResult;
class TextQuery
{
        public:
                TextQuery(std::ifstream &infile);
                QueryResult query(const std::string& word);
        private:
                std::shared_ptr<std::vector<std::string>>       file; //保存输入文件
                std::map<std::string, std::shared_ptr<std::set<line_no>>> wm; //保存各单词及出现行号的set
};

class QueryResult
{
        friend std::ostream& print(std::ostream &os, const QueryResult &qr);

        public:
        QueryResult(std::string w,
                    std::shared_ptr<std::vector<std::string>> f,
                    std::shared_ptr<std::set<line_no>> line) :
                word(w), file(f), lines(line) {}
        private:
        std::string     word;   //要查询的单词
        std::shared_ptr<std::vector<std::string>> file; //指向输入文件的vector
        std::shared_ptr<std::set<line_no>> lines;        //指向单词对应的行号set
};

using std::vector;
using std::string;
using std::shared_ptr;
using std::cout;
using std::cin;
using std::endl;
using std::istringstream;
using std::set;
using std::map;
using std::ifstream;
using std::make_shared;
using std::ostream;

//TextQuery类成员函数的定义
TextQuery::TextQuery(ifstream &is) : file(new vector<string>)
{
        string  text;
        while (getline(is, text)) //逐行处理
        {
                file->push_back(text);
                int     n = file->size() - 1;
                istringstream   stream(text);
                string  word;
                while (stream >> word)
                {
                        auto    &lines = wm[word]; //查询该单词是否已经存在
                        if (!lines)  //该单词第一次出现
                                lines.reset(new set<line_no>); //分配一个新的set
                        lines->insert(n);    //将行号插入set
                }
        }
}

QueryResult TextQuery::query(const string &word)
{
        static shared_ptr<set<line_no>> nodata(new set<line_no>);
        auto    it = wm.find(word);
        if (it == wm.end())
                return QueryResult(word, file, nodata);
        else
                return QueryResult(word, file, it->second);
}

//QueryResult类成员函数的定义
ostream& print(ostream &os, const QueryResult &qr)
{
        os << qr.word << " occurs " << qr.lines->size() <<
                ((qr.lines->size() > 1) ? "times " : "time ") << endl;
        for (auto val : *qr.lines)
                os << "\t(line " << val + 1 << ") " 
                        << *(qr.file->begin() + val) << endl;
        return os;
}

#endif
