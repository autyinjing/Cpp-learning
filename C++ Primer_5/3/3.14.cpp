// =====================================================================================
//
//       Filename:  3.14.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月22日 12时45分07秒
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
        vector<int>     ivec;
        int     ival;

        for (int i = 0; i < 5; ++i)
        {
                cin >> ival;
                ivec.push_back(ival);
        }
        for (auto out : ivec)
                cout << out << endl;

        return 0;
}

