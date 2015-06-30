// =====================================================================================
//
//       Filename:  10.9_.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月08日 08时36分40秒
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
        void elimDups(vector<string> &svec);
        void print(const vector<string> &svec);
        bool isShorter(const string &s1, const string &s2);

        vector<string>  svec{"the", "quick", "red", "fox", "jumps", 
                        "over", "the", "slow", "red", "turtle"};
        
        elimDups(svec);
        stable_sort(svec.begin(), svec.end(), isShorter);
        print(svec);

        return 0;
}

bool isShorter(const string &s1, const string &s2)
{
        return s1.size() < s2.size();
}

void print(const vector<string> &svec)
{
        for (auto s : svec)
                cout << s << ' ';
        cout << endl;
}

void elimDups(vector<string> &svec)
{
        cout << "In elimDups: \n";
        print(svec);
        sort(svec.begin(), svec.end());
        print(svec);
        auto    end_unique = unique(svec.begin(), svec.end());
        print(svec);
        svec.erase(end_unique, svec.end());
        print(svec);
}
