// =====================================================================================
//
//       Filename:  10.3.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月03日 10时14分16秒
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

int main(int argc, char *argv[])
{
        using namespace std;
        vector<int>     ivec{1, 3, 2, 2, 4, 7, 10, 14, 43, 21};
        auto            beg = ivec.cbegin(), end = ivec.cend();

        for (auto val : ivec)
                cout << val << ' ';
        cout << endl;
        for (auto i = 0; i < 5; ++i)
                cout << "The sum of vector<int> is " << accumulate(beg, end, i) << endl;

        return 0;
}
