// =====================================================================================
//
//       Filename:  3.43.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月22日 17时15分38秒
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
        int     ia[3][4] = {
                {0, 1, 2, 3},
                {4, 5, 6, 7},
                {8, 9, 10, 11}
        };
        //using   int_array = int[4];
        //typedef int int_array[4];

        for (const auto &row : ia)
                for (const auto &col : row)
                        cout << col << ' ';
        cout << endl;

        for (int i = 0; i < 3; ++i)
                for (int j = 0; j < 4; ++j)
                        cout << ia[i][j] << ' ';
        cout << endl;

        for (auto ip = begin(ia); ip != end(ia); ++ip)
                for (auto iq = begin(*ip); iq != end(*ip); ++iq)
                        cout << *iq << ' ';
        cout << endl;

        return 0;
}
