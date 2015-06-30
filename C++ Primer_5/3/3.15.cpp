// =====================================================================================
//
//       Filename:  3.15.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月22日 12时52分47秒
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
        string  str;

        for (int i = 0; i < 5; ++i)
        {
                getline(cin, str);
                svec.push_back(str);
        }
        for (auto s : svec)
                cout << s << endl;

        return 0;
}
