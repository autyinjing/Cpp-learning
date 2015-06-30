// =====================================================================================
//
//       Filename:  3.22.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月22日 14时00分01秒
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
        vector<string>  svec{"i am", " a ", "student", " and you? ", "fuck!", ""};

        for (auto s : svec)
                cout << s;
        cout << endl;
        for (auto s_it = svec.begin(); s_it != svec.end(); ++s_it)
                for (auto c_it = (*s_it).begin(); c_it != (*s_it).end(); ++c_it)
                        *c_it = toupper(*c_it);
        for (auto s : svec)
                cout << s;
        cout << endl;

        return 0;
}

