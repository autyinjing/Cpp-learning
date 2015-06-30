// =====================================================================================
//
//       Filename:  auto.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月21日 16时14分25秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>

int main()
{
        using namespace std;
        int     i = 0, &r = i;
        auto    a = r;
        const int       ci = i, &cr = ci;
        auto    b = ci;
        auto    c = cr;
        auto    d = &i;
        auto    e = &ci;

        const auto      f = ci;
        auto    &g = ci;
        //auto    &h = 42;
        const auto      &j = 42;

        a = 42;
        b = 42;
        c = 42;
        //d = 42;
        //e = 42;
        //g = 42;
        cout << a << " " << b << " " << c << " " << d << " " << e << " " << g << endl;

        return 0;
}

