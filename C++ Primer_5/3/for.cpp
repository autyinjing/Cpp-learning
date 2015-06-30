// =====================================================================================
//
//       Filename:  for.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月21日 17时57分22秒
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
        string  s("Hello World!!!");
        decltype(s.size())      punct_cnt = 0;

        for (auto c : s)
                if (ispunct(c))
                        ++punct_cnt;
        cout << punct_cnt
                << " punctuation characters in " << s << endl;

        return 0;
}

