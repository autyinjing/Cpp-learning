// =====================================================================================
//
//       Filename:  10.13.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月03日 11时34分11秒
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
        bool five(const string &s);
        void elimDups(vector<string> &s);
        bool isShorter(const string &s1, const string &s2);

        //变量声明、定义和初始化
        vector<string>  svec{"the", "jumps", "over", "quick", "red", "slow", "the", "fox", "red", "turtle"};
        
        //输出
        for (const auto &s : svec)
                cout << s << ' ';
        cout << endl;

        //排序去重并输出
        elimDups(svec);
        stable_sort(svec.begin(), svec.end(), isShorter);
        for (const auto &s : svec)
                cout << s << ' ';
        cout << endl;

        //再次排序并输出
        auto    end_five = partition(svec.begin(), svec.end(), five);
        cout << "The size < 5 : ";
        for (auto beg = svec.begin(); beg != end_five; ++beg)
                cout << *beg << ' ';
        cout << "\nThe size >= 5 : ";
        for (auto beg = end_five; beg != svec.end(); ++beg)
                cout << *beg << ' ';
        cout << endl;

        return 0;
}

bool five(const string &s)
{
        return s.size() < 5;
}

void elimDups(vector<string> &s)
{
        sort(s.begin(), s.end());
        auto    end_unique = unique(s.begin(), s.end());
        s.erase(end_unique, s.end());
}

bool isShorter(const string &s1, const string &s2)
{
        return s1.size() < s2.size();
}
