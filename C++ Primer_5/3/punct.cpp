// =====================================================================================
//
//       Filename:  punct.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月21日 18时34分34秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>
#include <string>
#include <cctype>

int main()
{
        using namespace std;
        string  s1("ab,cd.efg/hij  `!!OK\\");
        string  s2;
        for (auto c : s1)
                if (!ispunct(c))
                        s2 += c;
        cout << s1 << endl;
        cout << s2 << endl;

        return 0;
}

