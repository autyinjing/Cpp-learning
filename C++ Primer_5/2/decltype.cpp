// =====================================================================================
//
//       Filename:  decltype.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月21日 16时39分23秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>

int main()
{
        using namespace std;
        int     a = 3, b = 4;
        decltype(a)     c = a;
        decltype(a = b)   d = a;
        //++c;
        //++d;
        decltype((a)) f;

        cout << a << " " << b << ' ' << c << ' ' << d << endl;

        return 0;
}

