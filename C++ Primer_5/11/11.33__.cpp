// =====================================================================================
//
//       Filename:  11.33__.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  10/19/2014 05:16:24 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>
#include <string>
#include <fstream>
#include <map>
#include <sstream>

using namespace std;

void word_transform(ifstream &map_file, ifstream &infile);
map<string, string> buildMap(ifstream &map_file);
const string& transform(const string &s, map<string, string> &m);

int main(int argc, char *argv[])
{
        ifstream        map_file(argv[1]), infile(argv[2]);

        word_transform(map_file, infile);

        return false;
}

void word_transform(ifstream &map_file, ifstream &infile)
{
        auto    trans_map = buildMap(map_file);
        string  text;
        while (getline(infile, text))
        {
                istringstream   stream(text);
                string  word;
                bool    firstword = true;
                while (stream >> word)  //逐个单词进行转换
                {
                        if (firstword)
                                firstword = false;
                        else
                                cout << ' ';
                        cout << transform(word, trans_map);
                }
                cout << endl;   //处理完一行后输出换行
        }
}

map<string, string> buildMap(ifstream &map_file)
{
        map<string, string>     trans_map;
        string  key;
        string  value;
        while (map_file >> key && getline(map_file, value))
                if (value.size() > 1)   //存在转换规则
                        trans_map[key] = value.substr(1);
                else
                        throw runtime_error("no rule for " + key);
        return trans_map;
}

const string& transform(const string &s, map<string, string> &m)
{
        auto    map_it = m.find(s);
        if (map_it != m.end())  //存在转换规则
                return map_it->second;
        else
                return s;
}
