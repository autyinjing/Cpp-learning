// =====================================================================================
//
//       Filename:  9.14.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月25日 22时21分51秒
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
#include <list>

int main(int argc, char *argv[])
{
        using namespace std;
        list<const char *>    clst{"i am", " a ", "student!"};
        //list<const char *>::iterator  beg = clst.begin(), end = clst.end();
        vector<string>  svec;

        svec.assign(clst.begin(), clst.end());

        for (auto s : svec)
                cout << s << endl;

        return 0;
}
