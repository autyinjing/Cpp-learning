// =====================================================================================
//
//       Filename:  12.28.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月17日 14时06分31秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <fstream>
#include <sstream>

using namespace std;

int main(int argc, char *argv[])
{
        ifstream        infile(argv[1]);
        vector<string>  file_vec;
        string          text;            //保存每一行的内容
        map<string, set<int>>   word_map;//保存单词和行号的set
        vector<string>::size_type     line_num = 0;

        while (getline(infile, text))    //用vector<string>保存文件内容
        {
                ++line_num;
                file_vec.push_back(text);
                istringstream   stream(text);
                string          word;     //读取每一个单词
                while (stream >> word)    //保存每各单词及行号的map
                        word_map[word].insert(line_num);
        }

        string  input;
        while (true)
        {
                cout << "Enter word to look for, or q to quit: ";
                cin >> input;
                if (input == "q")
                        break;
                auto    find_it = word_map.find(input);
                if (find_it == word_map.end())
                        cout << "Don't have the word " << input << endl;
                else
                {
                        cout << input << " occurs " << find_it->second.size() << " times\n"; //打印行号
                        auto    set_it = find_it->second.begin();
                        while (set_it != find_it->second.end())         //打印每一个行号对应的内容
                        {
                                cout << "       (line " << *set_it << ") " << file_vec[*set_it-1] << endl;
                                ++set_it;
                        }
                }
        }
        return false;
}
