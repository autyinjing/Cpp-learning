// =====================================================================================
//
//       Filename:  13.13.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  10/18/2014 04:17:49 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>
#include <vector>

struct X
{
        X() { std::cout << "X()" << std::endl; }
        X(const X&) { std::cout << "X(const X&)" << std::endl; }
        ~X() { std::cout << "~X()" << std::endl; }
        X& operator=(const X& x) { std::cout << "X& operator=(const X& x)" << std::endl; 
                                        return *this; }
};

void reference(X &x)
{
        X       x1 = x;
}

void value(X x)
{
        X       x1 = x;
}

int main(int argc, char *argv[])
{
        X       x1;
        X       x2(x1);
        X       x3 = x1;
        X       *x4(new X(x1));

        x1 = x2;
        std::vector<X>       xvec;
        reference(x1);
        value(x1);
        delete x4;

        return false;
}
