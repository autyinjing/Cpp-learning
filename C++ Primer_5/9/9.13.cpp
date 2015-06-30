// =====================================================================================
//
//       Filename:  9.13.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月25日 21时59分36秒
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
#include <list>

int main(int argc, char *argv[])
{
        using namespace std;
        list<int>       ilst{1, 2, 3};
        vector<double>  dvec(ilst.begin(), ilst.end());
        vector<int>     ivec{1, 2, 3, 4};
        vector<double>  dvec_(ivec.begin(), ivec.end());

        for (auto val: dvec)
                cout << val << ' ';
        cout << endl;
        for (auto val : dvec_)
                cout << val << ' ';
        cout << endl;

        return 0;
}
