// =====================================================================================
//
//       Filename:  2.16.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月20日 13时09分20秒
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
        int     i = 0, &r1 = i;
        double  d = 0, &r2 = d;

        r2 = 3.1415926; 
        std::cout << r2 << std::endl;
        r2 = r1;
        std::cout << r2 << std::endl;
        i = r2; 
        std::cout << i << std::endl;
        r1 = d;
        std::cout << r1 << std::endl;

        return 0;
}

