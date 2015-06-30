// =====================================================================================
//
//       Filename:  3.31.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月22日 16时19分10秒
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
#include <cctype>

int main()
{
        using namespace std;
        int     iarr[10];
        int     iarr_[10];
        vector<int>     ivec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        auto            ivec_ = ivec;

        for (int i = 0; i < 10; ++i)
                iarr[i] = i;
        for (auto val : iarr)
                cout << val << ' ';
        cout << endl;
        for (int i = 0; i < 10; ++i)
                iarr_[i] = iarr[i];
        for (auto val : iarr_)
                cout << val << ' ';
        cout << endl;
        for (auto ival : ivec_)
                cout << ival << ' ';
        cout << endl;

        return 0;
}

