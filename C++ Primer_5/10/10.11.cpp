// =====================================================================================
//
//       Filename:  10.11.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月03日 11时18分21秒
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
#include <list>
#include <deque>
#include <forward_list>
#include <algorithm>

using namespace std;

int main(int argc, char *argv[])
{
        //函数声明
        void elimDups(vector<string> &);
        bool isShorter(const string &s1, const string &s2);

        //变量声明
        vector<string>  svec{"the", "quick", "red", "fox", "jumps", "over", "the", "slow", "red", "turtle"};

        //输出
        for (const auto &s : svec)
                cout << s << ' ';
        cout << endl;
        //排序并去重
        elimDups(svec);
        //输出
        for (const auto &s : svec)
                cout << s << ' ';
        cout << endl;
        //按长度重排，长度相同的保持字典序
        stable_sort(svec.begin(), svec.end(), isShorter);
        //输出
        for (const auto &s : svec)
                cout << s << ' ';
        cout << endl;

        return 0;
}

void elimDups(vector<string> &words)
{
        sort(words.begin(), words.end());
        auto    end_unique = unique(words.begin(), words.end());
        words.erase(end_unique, words.end());
}

bool isShorter(const string &s1, const string &s2)
{
        return s1.size() < s2.size();
}
