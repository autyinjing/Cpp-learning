// =====================================================================================
//
//       Filename:  6.55.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月23日 21时27分41秒
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
        int     sum(int, int);
        int     del(int, int);
        int     mul(int, int);
        int     ext(int, int);
        vector<int (*)(int, int)> pf{sum, del, mul, ext};

        int     a, b;
        cin >> a >> b;
        for (auto p : pf)
                cout << p(a, b) << endl;

        return 0;
}

int sum(int a, int b)
{
        return a + b;
}

int del(int a, int b)
{
        return a - b;
}

int mul(int a, int b)
{
        return a * b;
}

int ext(int a, int b)
{
        if (b != 0)
                return a / b;
        return 0;
}
