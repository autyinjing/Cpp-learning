// =====================================================================================
//
//       Filename:  3.21.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月22日 13时47分02秒
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
        vector<string>  v7{10, "hi"};
        for (auto it = v7.begin();
                        it != v7.end(); ++it)
                cout << it->size() << ' ' << (*it) << endl;

        return 0;
}
