// =====================================================================================
//
//       Filename:  12.16.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月15日 20时21分43秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>
#include <memory>

int main(int argc, char *argv[])
{
        using namespace std;
        unique_ptr<int>         up(new int(43));
        auto    p = up;

        return false;
}
