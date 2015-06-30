// =====================================================================================
//
//       Filename:  10.42.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月08日 19时15分54秒
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
#include <functional>
#include <iterator>

using namespace std;
using namespace std::placeholders;

int main(int argc, char *argv[])
{
        list<string>    slst{"the", "quick", "red", "fox", "jumps", 
                        "over", "the", "slow", "red", "turtle"};

        for_each(slst.begin(), slst.end(), [](const string &s)
                        { cout << s << ' '; });
        cout << endl;
        slst.sort();
        for_each(slst.begin(), slst.end(), [](const string &s)
                        { cout << s << ' '; });
        cout << endl;
        slst.unique();
        for_each(slst.begin(), slst.end(), [](const string &s)
                        { cout << s << ' '; });
        cout << endl;
        
        slst.sort([](const string &a, const string &b)
                        { return a.size() < b.size(); });
        for_each(slst.begin(), slst.end(), [](const string &s)
                        { cout << s << ' '; });
        cout << endl;

        return 0;
}
