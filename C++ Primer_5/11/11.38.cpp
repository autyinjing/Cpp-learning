// =====================================================================================
//
//       Filename:  11.38.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月09日 12时05分51秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <fstream>
#include <sstream>

using namespace std;

void word_transform(ifstream &map_file, ifstream &input);
unordered_map<string, string> buildMap(ifstream &map_file);
const string &transform(const string &s, const unordered_map<string, string> &m);

int main(int argc, char *argv[])
{
        ifstream        map_file("a.txt"), input("b.txt");
        word_transform(map_file, input);

        return 0;
}

void word_transform(ifstream &map_file, ifstream &input)
{
        auto trans_unmap = buildMap(map_file);  //保存转换规则
        string  text;   //保存每一行输入
        while (getline(input, text))
        {
                istringstream   stream(text);
                string  word;
                bool firstword = true;
                while (stream >> word)
                {
                        if (firstword)
                                firstword = false;
                        else
                                cout << ' ';
                        cout << transform(word, trans_unmap);
                }
                cout << endl;
        }
}

unordered_map<string, string> buildMap(ifstream &map_file)
{
        unordered_map<string, string>   trans_unmap; //保存转换规则
        string  key;
        string  value;

        while (map_file >> key && getline(map_file, value))
                if (value.size() > 1) //检查是否有转换规则
                        trans_unmap[key] = value.substr(1); //跳过前导空格
                else
                        throw runtime_error("no rule for " + key);
        return trans_unmap;
}

const string &transform(const string &s, const unordered_map<string, string> &um)
{
        auto unmap_it = um.find(s);

        if (unmap_it != um.end())
                return unmap_it->second;        //使用替换短语
        else
                return s;
}
