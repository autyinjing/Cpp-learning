// =====================================================================================
//
//       Filename:  13.31.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  10/19/2014 02:25:14 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include "hasptr.h"
#include <algorithm>
#include <vector>
#include <iostream>

int main(int argc, char *argv[])
{
        std::vector<HasPtr>  hvec
        {
                HasPtr("honey"), HasPtr("aut"),
                HasPtr("yinquiet"), HasPtr("and")
        };

        sort(hvec.begin(), hvec.end());
        for (const auto &val : hvec)
                val.print();

        return false;
}
