// =====================================================================================
//
//       Filename:  11.33.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月09日 11时16分57秒
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
#include <map>
#include <fstream>
#include <sstream>

using namespace std;
        
void word_transform(ifstream &map_file, ifstream &input);
map<string, string> buildMap(ifstream &map_file);
const string & transform(const string &s, const map<string, string> &m);        

int main(int argc, char *argv[])
{
        ifstream        r_in("a.txt"), t_in("b.txt");
        word_transform(r_in, t_in);

        return 0;
}

void word_transform(ifstream &map_file, ifstream &input)
{
        auto trans_map = buildMap(map_file);    //保存转换规则
        string  text;                           //保存输入的每一行
        while (getline(input, text))
        {
                istringstream   stream(text);   //读取每个单词
                string  word;
                bool firstword = true;          //控制是否打印空格
                while (stream >> word)
                {
                        if (firstword)
                                firstword = false;
                        else
                                cout << ' ';
                        cout << transform(word, trans_map); //打印输出
                }
                cout << endl;                   //完成一行的转换
        }
}

map<string, string> buildMap(ifstream &map_file)
{
        map<string, string>     trans_map;
        string  key;    //要替换的单词
        string  value;  //替换后的内容

        //读取第一个单词存入key中，行中剩余内容存入value
        while (map_file >> key && getline(map_file, value))
                if (value.size() > 1)   //检查是否有转换规则
                        //trans_map[key] = value.substr(1); //跳过前导空格
                        trans_map.insert({key, value.substr(1)});
                else
                        throw runtime_error("no rule for " + key);
        return trans_map;
}

const string &transform(const string &s, const map<string, string> &m)
{
        auto    map_it = m.find(s);
//        auto    map_it = m[s];
        //如果单词在转换规则中
        if (map_it != m.cend())
                return map_it->second;  //使用替换短语
        else
                return s;               //返回原string
}
