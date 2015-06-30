// =====================================================================================
//
//       Filename:  10.29.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月08日 11时45分43秒
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
#include <fstream>

using namespace std;
using namespace std::placeholders;

int main(int argc, char *argv[])
{
        ifstream        in(argv[1]);
        istream_iterator<string> str_it(in), eof;
        vector<string>  svec;

        copy(str_it, eof, back_inserter(svec));

        for (const auto &s : svec)
                cout << s;

        return 0;
}
