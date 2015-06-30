// =====================================================================================
//
//       Filename:  3.41.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月22日 16时59分39秒
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
        int     iarr[] = {1, 3, 5, 7, 9};
        vector<int>     ivec(begin(iarr), end(iarr));

        for (auto ival : iarr)
                cout << ival << ' ';
        cout << endl;
        for (auto val : ivec)
                cout << val << ' ';
        cout << endl;

        return 0;
}
