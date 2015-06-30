// =====================================================================================
//
//       Filename:  test.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月20日 12时14分27秒
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
        using std::cout;
        cout << "/*";
        cout << "*/";
        cout << /* "*/" */;
        cout << /* " */" /* " */"*/;
        return -1;
}
