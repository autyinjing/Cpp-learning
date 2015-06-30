// =====================================================================================
//
//       Filename:  13.30.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  10/19/2014 01:56:05 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include "hasptr.h"

int main(int argc, char *argv[])
{
        HasPtr  p1("honey"), p2("aut");
        p1.print();
        p2.print();

        swap(p1, p2);
        p1.print();
        p2.print();

        return false;
}
