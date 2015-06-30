// =====================================================================================
//
//       Filename:  13.19.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  10/18/2014 07:24:24 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>

#include "employee.h"

int main(int argc, char *argv[])
{
        Employee        e1, e2 = e1, e3(e2);

        f(e1);
        f(e2);
        f(e3);

        return false;
}
