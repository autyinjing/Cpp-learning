// =====================================================================================
//
//       Filename:  6.32.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月23日 19时08分48秒
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

int &get(int *array, int index);

int main()
{
        using namespace std;
        int     ia[10];
        for (int i = 0; i != 10; ++i)
                get(ia, i) = i;
        for (auto val : ia)
                cout << val << ' ';
        cout <<endl;

        return 0;
}

int &get(int *array, int index)
{
        return array[index];
}
