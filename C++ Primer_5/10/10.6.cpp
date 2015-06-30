// =====================================================================================
//
//       Filename:  10.6.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月03日 10时41分14秒
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
#include <iterator>

int main(int argc, char *argv[])
{
        using namespace std;
        vector<int>     ivec;
        fill_n(back_inserter(ivec), 10, 1);
        auto            beg = ivec.begin(), end = ivec.end();

        for (auto val : ivec)
                cout << val << ' ';
        cout << endl;
        fill_n(beg, ivec.size(), 0);
        for (auto val : ivec)
                cout << val << ' ';
        cout << endl;

        return 0;
}
