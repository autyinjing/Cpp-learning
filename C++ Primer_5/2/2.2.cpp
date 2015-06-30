// =====================================================================================
//
//       Filename:  2.2.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月20日 12时53分10秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>
#include <string>

using std::cout;
using std::endl;

std::string global_str;
int     global_int;

int main()
{
        int     local_int;
        std::string local_str;
        cout << global_str << endl;
        cout << global_int << endl;
        cout << local_int << endl;
        cout << local_str << endl;

        return 0;
}

