// =====================================================================================
//
//       Filename:  3.24.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月22日 14时20分52秒
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
        vector<int>     ivec{1, 3, 5, 7, 9, 2, 4, 6, 8, 10};
        auto beg = ivec.begin(), end = ivec.end();
        auto mid = ivec.begin() + (end - beg) / 2;
        
        for (auto it = beg; it != end - 1; ++it)
                cout << *it + *(it+1) << ' ';
        cout << endl;
        for (auto it = beg; it != mid; ++it)
                cout << *it + *(end-1) << ' ';
        cout << endl;

        return 0;
}
