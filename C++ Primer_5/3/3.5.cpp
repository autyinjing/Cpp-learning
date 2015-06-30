// =====================================================================================
//
//       Filename:  3.5.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月21日 17时41分10秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>
#include <string>

int main()
{
        using namespace std;
        string  str1, str2, temp;

        while ( cin >> temp )                
        {
                str1 += temp;
                str2 += temp + " ";
                cout << str1 << endl;
                cout << str2 << endl;
        }

        return 0;
}

