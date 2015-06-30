// =====================================================================================
//
//       Filename:  10.21.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月08日 10时09分02秒
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
        int     val = 5;
        auto    f = [&val]()->int { if (val != 0) return --val;
                                                return val == 0; };
        while (f())
                cout << val << ' ';
        cout << endl;

        return 0;
}
