// =====================================================================================
//
//       Filename:  10.24.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月08日 10时39分22秒
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
        bool check_size(const string &s, unsigned sz);

        string          str{"fuck you!"};
        vector<unsigned>     ivec{3, 8, 22, 11, 9};

        auto    it = find_if(ivec.begin(), ivec.end(),
                                bind(check_size, str, _1));
        if (it != ivec.end())
                cout << *it << endl;

        return 0;
}

bool check_size(const string &s, unsigned sz)
{
        return s.size() < sz;
}
