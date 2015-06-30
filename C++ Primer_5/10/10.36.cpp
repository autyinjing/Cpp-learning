// =====================================================================================
//
//       Filename:  10.36.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月08日 13时35分12秒
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
        list<int>       ilst{1, 3, 0, 8, 2, 0, 3, 5, 0, 1};
        auto            it = find(ilst.crbegin(), ilst.crend(), 0);

        for (auto val : ilst)
                cout << val << ' ';
        cout << endl;
        cout << *it << endl;
        cout << *--it << endl;

        return 0;
}
