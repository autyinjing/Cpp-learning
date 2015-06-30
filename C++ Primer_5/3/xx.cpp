// =====================================================================================
//
//       Filename:  xx.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月21日 18时27分07秒
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
        string  str("Hello world!!!");
        cout << str << endl;
        for (auto &c : str)
                c = 'X';
        cout << str << endl;

        return 0;
}

