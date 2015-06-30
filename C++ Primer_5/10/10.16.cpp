// =====================================================================================
//
//       Filename:  10.16.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月03日 12时18分41秒
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
        void biggies(vector<string> &words, vector<string>::size_type sz);
        void elimDups(vector<string> &s);

        //变量声明和定义
        vector<string>  svec{"the", "quick", "over", "red", "fox", "jumps", "the", "slow", "red", "turtle"};

        for (int i = 0; i < 5; ++i)
                biggies(svec, i);

        return 0;
}

void elimDups(vector<string> &s)
{
        sort(s.begin(), s.end());
        auto    end_unique = unique(s.begin(), s.end());
        s.erase(end_unique, s.end());
}

void biggies(vector<string> &words, vector<string>::size_type sz)
{
        elimDups(words);
        stable_sort(words.begin(), words.end(),
                      [](const string &a, const string &b)
                        { return a.size() < b.size(); });
        /*auto    wc = find_if(words.begin(), words.end(),
                        [sz](const string &a) { return a.size() >= sz; });*/
        //auto    wc = partition(words.begin(), words.end(),
          //              [sz](const string &a) { return a.size() < sz; });
        auto    wc = stable_partition(words.begin(), words.end(),
                        [sz](const string &a) { return a.size() < sz; });
        auto    count = words.end() - wc;
        cout << count << " words of length " << sz << " or longer" << endl;
        for_each(wc, words.end(),
                        [](const string &s) { cout << s << ' '; });
        cout << endl;
}
