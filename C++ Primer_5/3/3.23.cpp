// =====================================================================================
//
//       Filename:  3.23.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月22日 14时11分02秒
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

        for (auto it = ivec.begin(); it != ivec.end(); ++it)
                *it = 2 * *it;
        for (auto it = ivec.begin(); it != ivec.end(); ++it)
                cout << *it << ' ';
        cout << endl;

        return 0;
}
