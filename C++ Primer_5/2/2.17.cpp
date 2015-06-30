// =====================================================================================
//
//       Filename:  2.17.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月20日 13时15分59秒
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
        int     i, &ri = i;
        i = 5;
        ri = 10;
        std::cout << i << " " << ri << std::endl;

        return 0;
}

