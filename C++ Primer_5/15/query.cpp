// =====================================================================================
//
//       Filename:  query.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月30日 21时05分15秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>

#include "query.h"

int main(int argc, char *argv[])
{
        std::ifstream   infile("a.txt");  
        TextQuery       tq(infile);

        std::cout << (Query("fiery") & Query("bird") | Query("wind")) << std::endl;
        print(std::cout, (Query("fiery") & Query("bird") | Query("wind")).eval(tq));

        return false;
}
