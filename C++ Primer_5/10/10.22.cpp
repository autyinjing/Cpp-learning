// =====================================================================================
//
//       Filename:  10.22.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月08日 10时25分14秒
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

using namespace std;
using namespace std::placeholders;

int main(int argc, char *argv[])
{
        bool less(const string &s, size_t sz);

        vector<string>  svec{"OK", "and", "are", "fuck", "bich",
                        "andyou", "fucker", "nanii", "youtube", "kugou"};

        for (size_t i = 0; i < 6; ++i)
                cout << i << ": "
                        << count_if(svec.begin(), svec.end(),
                                        bind(less, _1, i))
                        << " times\n";

        return 0;
}

bool less(const string &s, size_t sz)
{
        return s.size() > sz;
}
