// =====================================================================================
//
//       Filename:  11.33_.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  10/19/2014 04:50:31 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <string>
#include <map>
#include <iostream>
#include <sstream>
#include <fstream>
#include <vector>

using namespace std;

void word_transform(ifstream &map_file, ifstream &infile);
map<string, string> buildMap(ifstream &map_file);
const string &transform(const string &s, const map<string, string> &m);

int main(int aegc, char *argv[])
{
        ifstream        map_file(argv[1]), infile(argv[2]);

        word_transform(map_file, infile);

        return false;
}

void word_transform(ifstream &map_file, ifstream &infile)
{
        auto    trans_map = buildMap(map_file);
        string  text;
        while (getline(infile, text))   //逐行处理文件
        {
                istringstream   stream(text);
                string  word;
                bool    firstword = true;
                while (stream >> word)
                {
                        if (firstword)
                                firstword = false;
                        else
                                cout << " ";
                        cout << transform(word, trans_map);
                }
                cout << endl;
        }
}

map<string, string> buildMap(ifstream &map_file)
{
        map<string, string>     trans_map;
        string  key;
        string  value;
        while (map_file >> key && getline(map_file, value))
                if (value.size() > 1) //检查是否有转换规则
                        trans_map[key] = value.substr(1); //跳过前导空格
                else
                        throw runtime_error("no rule for " + key);
        return trans_map;
}

const string& transform(const string &s, const map<string, string> &m)
{
        auto    map_it = m.find(s);
        if (map_it != m.end())  //如果单词在转换规则中
                return map_it->second;
        else
                return s;
}
