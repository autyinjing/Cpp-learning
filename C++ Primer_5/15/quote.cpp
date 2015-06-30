// =====================================================================================
//
//       Filename:  quote.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月29日 10时17分17秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================
#include <iostream>
#include "quote.h"

int main(int argc, char *argv[])
{
        Bulk_quote      bq("250-250-250", 250, 10, 0.5);
        Quote           q("250-250-250", 250);
        std::size_t          input;

        while (std::cin >> input)
        {
                print_total(std::cout, q, input);
                print_total(std::cout, bq, input);
        }

        return false;
}
