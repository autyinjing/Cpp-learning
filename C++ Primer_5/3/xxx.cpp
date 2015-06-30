// =====================================================================================
//
//       Filename:  xxx.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月21日 18时30分51秒
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
        string  s("Hello world!!!");
        cout << s << endl;
        for (char &c : s)
                c = 'X';
        cout << s << endl;

        return 0;
}

