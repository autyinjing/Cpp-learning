// =====================================================================================
//
//       Filename:  3.20.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月22日 13时22分03秒
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
        vector<int>     ivec;
        int     ival;

        cin >> ival;
        while (ival != 0)
        {
                ivec.push_back(ival);
                cin >> ival;
        }
        for (vector<int>::size_type i = 0; i < ivec.size()-1; ++i)
                cout << ivec[i] + ivec[i+1] << " ";
        cout << endl;
        for (vector<int>::size_type i = 0; i < ivec.size()/2; ++i)
                cout << ivec[i] + ivec[ivec.size()-i-1] << " ";
        cout << endl;

        return 0;
}

