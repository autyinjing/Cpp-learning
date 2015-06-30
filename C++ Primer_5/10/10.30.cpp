// =====================================================================================
//
//       Filename:  10.30.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月08日 11时54分43秒
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
        istream_iterator<int>   in_iter(cin), in_eof;
        ostream_iterator<int>   out_iter(cout, " ");
        vector<int>             ivec;

        copy(in_iter, in_eof, inserter(ivec, ivec.begin()));
        sort(ivec.begin(), ivec.end());
        unique_copy(ivec.begin(), ivec.end(), out_iter);
        cout << endl;
        //copy(ivec.begin(), ivec.end(), out_iter);
        //cout << endl;

        return 0;
}
