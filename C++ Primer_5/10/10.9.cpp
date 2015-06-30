// =====================================================================================
//
//       Filename:  10.9.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月03日 10时51分54秒
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
        void elimDups(vector<string> &);
        vector<string>  svec{"fox", "jumps", "over", "quick", "red", "slow", "the", "red", "the", "turtle"};

        cout << "size: " << svec.size() << endl;
        for (auto val : svec)
                cout << val << ' ';
        cout << endl;
        elimDups(svec);
        cout << "size: " << svec.size() << endl;
        for (auto val : svec)
                cout << val << ' ';
        cout << endl;

        return 0;
}

void elimDups(vector<string> &words)
{
        sort(words.begin(), words.end());
        auto end_unique = unique(words.begin(), words.end());
        words.erase(end_unique, words.end());
} 
