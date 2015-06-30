// =====================================================================================
//
//       Filename:  6.51.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月23日 20时08分14秒
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
        
using namespace std;

int main()
{
        void    f();
        void    f(int);
        void    f(int, int);
        void    f(double, double = 3.14);

        //f(2.56, 42);
        f(42);
        f(42, 0);
        f(2.56, 3.14);

        return 0;
}

void f()
{
        cout << "temp\n";
}

void f(int a)
{
        cout << "int\n";
}

void f(int a, int b)
{
        cout << "int, int\n";
}

void f(double d1, double d2)
{
        cout << "double, double\n";
}
