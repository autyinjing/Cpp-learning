// =====================================================================================
//
//       Filename:  18.20.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年11月04日 15时30分14秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>

using std::cout;
using std::endl;

namespace primerLib
{
        void compute() { cout << "compute()" << endl; }
        void compute(const void *) { cout << "compute(const void *)" << endl; }
}

//using primerLib::compute;

//void compute(int) { cout << "compute(int)" << endl; }
void compute(double, double = 3.4) { cout << "compute(double, double = 3.4)" << endl; }
void compute(char *, char * = 0) { cout << "compute(char *, char * = 0)" << endl; }

void f()
{
        compute(0);
}

int main()
{
        using primerLib::compute;
        f();

        return false;
}
