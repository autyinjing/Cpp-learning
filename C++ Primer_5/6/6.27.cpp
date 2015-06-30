// =====================================================================================
//
//       Filename:  6.27.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月23日 18时44分09秒
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
#include <initializer_list>

int main()
{
        using namespace std;
        int     sum(initializer_list<int> list);

        cout << sum({1, 2, 3, 4, 5, 6}) << endl;

        return 0;
}

int sum(std::initializer_list<int> list)
{
        int     sum = 0;
        for (const auto i : list)
                sum += i;
        return sum;
}
