// =====================================================================================
//
//       Filename:  test.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月10日 09时30分57秒
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
#include <algorithm>
#include <memory>

using namespace std;

int main(int argc, char *argv[])
{
        int     *q = new int(42), *r = new int(100);
        r = q;

        cout << *q << ' ' << *r << endl;

        return 0;
}
