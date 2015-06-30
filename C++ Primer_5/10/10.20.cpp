// =====================================================================================
//
//       Filename:  10.20.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月08日 10时00分31秒
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
        vector<string>  svec{"soga", "nani", "fucker", "bich", 
                        "are", "nobody", "hey", "ok"};

        for_each(svec.begin(), svec.end(),
                        [](const string &s) { cout << s << ' '; });
        cout << endl;
        for (unsigned i = 0; i < 7; ++i)
                cout << i << ": " <<
                        count_if(svec.begin(), svec.end(),
                                [i](const string &s) { return s.size() >= i; })
                        << " times\n";

        return 0;
}
