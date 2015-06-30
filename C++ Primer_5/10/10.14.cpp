// =====================================================================================
//
//       Filename:  10.14.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月03日 12时11分59秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <deque>
#include <forward_list>
#include <algorithm>

int main(int argc, char *argv[])
{
        using namespace std;
        int     a = 3, b = 4;
        auto    f = [a, b]() { return a + b; };

        cout << "The sum is " << f() << endl;

        return 0;
}
