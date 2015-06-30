// =====================================================================================
//
//       Filename:  replace.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月15日 19时49分59秒
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

void trans_form(ifstream &map_file, ifstream &input);
map<string, string> buildMap(ifstream &map_file);
const string &transform(const string &word, const map<string, string> &m);

int main(int argc, char *argv[])
{
        ifstream        map_file(argv[1]), input(argv[2]);

        trans_form(map_file, input);

        return 0;
}

void trans_form(ifstream &map_file, ifstream &input)
{
        auto    trans_map = buildMap(map_file);
        string  text;
        while (getline(input, text))
        {
                istringstream   stream(text);
                string  word;
                bool    firstword = true;
                while (stream >> word)
                {
                        if (firstword)
                                firstword = false;
                        else
                                cout << ' ';
                        cout << transform(word, trans_map);
                }
                cout << endl;
        }
}

map<string, string> buildMap(ifstream &map_file)
{
        map<string, string>     trans_map;
        string  key, value;
        while (map_file >> key && getline(map_file, value))
        {
                if (value.size() > 1)
                        trans_map[key] = value.substr(1);     //跳过前导空格
                else
                        throw runtime_error("no rule for " + key);
        }
        return trans_map;
}

const string &transform(const string &word, const map<string, string> &m)
{
        auto    map_it = m.find(word);  //find返回指向该元素的迭代器
        if (map_it != m.cend())
                return map_it->second;
        else
                return word;
}
