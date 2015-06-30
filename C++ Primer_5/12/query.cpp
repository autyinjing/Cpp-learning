// =====================================================================================
//
//       Filename:  query.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月16日 11时20分51秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include "query.h"

//TextQuery类的成员函数定义
TextQuery::TextQuery(ifstream &infile)
{
        string  line;           //保存每一行的内容
        int     line_number = 0;//记录行号

        while (getline(infile, line))
        {
                ++line_number;
                text.push_back(line);
                istringstream   stream(line);
                string  word;
                while (stream >> word) //处理每一个单词
                        word_info[word].insert(line_number);
        }
}

QueryResult TextQuery::query(const string &word)
{
        map<int, string>        imap;
        int             times = 0;
        auto            find_it = word_info.find(word);

        if (find_it != word_info.end()) //找到单词信息
        {
                auto beg = find_it->second.begin(), end = find_it->second.end();
                while (beg != end)
                {
                        imap[*beg] = text[*beg-1]; //将行号和行内容保存到map中
                        ++beg;
                        ++times;
                }
        }

        return QueryResult(word, times, imap);
}

//QueryResult类的成员函数定义
void QueryResult::print(ostream& os) const
{
        os << word << " occurs " << times << " times\n";

        auto    beg = result_map.begin(), end = result_map.end();
        while (beg != end)
        {
                os << "    (line " << beg->first << ") " 
                        << beg->second << endl;
                ++beg;
        }
}
