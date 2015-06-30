// =====================================================================================
//
//       Filename:  test.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年11月03日 13时26分30秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>

#include "blob.h"
#include "debugdelete.h"

int main(int argc, char *argv[])
{
        using namespace std;
        
/*        Blob<int>       ib{1, 3, 5, 7, 9};

        for (Blob<int>::size_type i = 0; i != ib.size(); ++i)
                cout << ib[i] << endl;
*/
        double  *p = new double(5);

        cout << *p << endl;
        DebugDelete     d;

        d(p);

        int     *ip = new int;

        DebugDelete()(ip);

        return false;
}
