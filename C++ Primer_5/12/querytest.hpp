/* ***********************************************************************

  > File Name: querytext.hpp
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月18日 星期四 15时43分22秒

 ********************************************************************** */

#ifndef QUERYTEXT_HPP
#define QUERYTEXT_HPP

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <memory>
#include <sstream>
#include <set>
#include <fstream>

using namespace std;

using line_no = vector<string>::size_type;

class QueryResult;
class TextQuery
{
public:
    TextQuery(ifstream&);
    QueryResult query(const string&) const;

private:
    shared_ptr<vector<string>> file;
    map<string, shared_ptr<set<line_no>>> wm;
};

TextQuery::TextQuery(ifstream& ifile) : file(new vector<string>)
{
    string text;
    line_no no = 0;
    while (getline(ifile, text))
    {
        ++no;
        file->push_back(text);
        istringstream line(text);
        string word;
        while (line >> word)
        {
            auto &lines = wm[word];
            if (!lines)
                lines.reset(new set<line_no>);
            lines->insert(no);
        }
    }
}

class QueryResult
{
    friend ostream& print(ostream&, const QueryResult&);
public:
    QueryResult(string s,
                shared_ptr<vector<string>> p,
                shared_ptr<set<line_no>> l)
        : query_word(s), file(p), lines(l) {  }
    set<line_no>::const_iterator begin() const { return lines->cbegin(); }
    set<line_no>::const_iterator end() const { return lines->cend(); }
    shared_ptr<vector<string>> get_file() { return file; }

private:
    string query_word;
    shared_ptr<vector<string>> file;
    shared_ptr<set<line_no>> lines;
};

ostream& print(ostream& os, const QueryResult& qr)
{
    os << qr.query_word << ": " << qr.lines->size() << endl;
    for (const auto& it : *(qr.lines))
    {
        cout << it << "     " << *(qr.file->begin() + it - 1) << endl;
    }
    return os;
}

QueryResult TextQuery::query(const string &word) const
{
    static shared_ptr<set<line_no>> nodata(new set<line_no>);
    auto loc = wm.find(word);
    if (loc == wm.end())
        return QueryResult(word, file, nodata);
    else
        return QueryResult(word, file, loc->second);
}

#endif
