// =====================================================================================
//
//       Filename:  ioit.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月08日 11时37分42秒
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
        istream_iterator<int>   in(cin), eof;
        cout << accumulate(in, eof, 0) << endl;

        return 0;
}
