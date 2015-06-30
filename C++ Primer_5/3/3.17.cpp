// =====================================================================================
//
//       Filename:  3.17.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月22日 13时07分37秒
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
        vector<string>  svec;
        string  sval;

        for (int i = 0; i < 5; ++i)
        {
                cin >> sval;
                svec.push_back(sval);
        }
        for (auto s : svec)
                cout << s << endl;
        for (auto &s : svec)
                for (auto &c : s)
                        c = toupper(c);
        for (auto s : svec)
                cout << s << endl;

        return 0;
}
