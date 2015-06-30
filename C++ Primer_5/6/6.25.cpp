// =====================================================================================
//
//       Filename:  6.25.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月23日 18时25分11秒
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
#include <cctype>

int main()
{
        using namespace std;
        int     a = 1, b = 2, *pa = &a, *pb = &b;

        bool exchange(int *&pa, int *&pb);
        cout << *pa << ' ' << *pb << endl;
        exchange(pa, pb);
        cout << *pa << ' ' << *pb << endl;

        return 0;
}

bool exchange(int *&pa, int *&pb)
{
        int     *temp = pa;

        pa = pb;
        pb = temp;

        return true;
}
