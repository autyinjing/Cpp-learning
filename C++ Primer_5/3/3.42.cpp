// =====================================================================================
//
//       Filename:  3.42.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月22日 17时02分57秒
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
        vector<int>     ivec{1, 3, 5, 7, 9};
        int             iarr[5];

        for (decltype(ivec.size()) i = 0; i < ivec.size(); ++i)
                iarr[i] = ivec[i];
        for (auto val : iarr)
                cout << val << ' ';
        cout << endl;

        return 0;
}
