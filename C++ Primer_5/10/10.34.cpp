// =====================================================================================
//
//       Filename:  10.34.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月08日 13时28分04秒
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
        vector<int>     ivec{1, 3, 5, 7, 9};
        ostream_iterator<int>   out_iter(cout, " ");

        copy(ivec.crbegin(), ivec.crend(), out_iter);
        cout << endl;

        return 0;
}
