// =====================================================================================
//
//       Filename:  3.16.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月22日 13时04分13秒
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
        vector<int>     v5{10, 42};
        vector<string>  v7{10, "hi"};

        cout << v5.size() << endl;
        for (auto ival : v5)
                cout << ival << ' ';
        cout << endl;
        cout << v7.size() << endl;
        for (auto sval : v7)
                cout << sval << endl;

        return 0;
}

