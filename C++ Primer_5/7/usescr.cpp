// =====================================================================================
//
//       Filename:  usescr.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月24日 13时02分24秒
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
#include "screen.h"

int main()
{
        using namespace std;
        Screen  myScreen(5, 5, 'X');
        myScreen.move(4, 0).set('#').display(cout);
        cout << "\n";
        myScreen.display(cout);
        cout << "\n";

        return 0;
}
