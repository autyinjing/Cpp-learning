// =====================================================================================
//
//       Filename:  10.13_.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月08日 09时09分52秒
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
        bool less_five(const string &s);
        void print(const vector<string> &svec);

        vector<string>  svec{"the", "quick", "red", "fox", "jumps", 
                        "over", "the", "slow", "red", "turtle"};

        print(svec);
        auto    end_less_five = partition(svec.begin(), svec.end(), less_five);
        print(svec);
        while (end_less_five != svec.end())
                cout << *end_less_five++ << ' ';
        cout << endl;

        return 0;
}

bool less_five(const string &s)
{
        return s.size() < 5;
}

void print(const vector<string> &svec)
{
        for (const auto &s : svec)
                cout << s << ' ';
        cout << endl;
}
