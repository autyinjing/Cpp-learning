// =====================================================================================
//
//       Filename:  const.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月21日 18时39分17秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>
#include <string>

int main()
{
        using namespace std;
        const string    s = "Keep out!";

        for (auto &c : s)
                c = 'a';
                //cout << c;
        cout << endl;

        return 0;
}

