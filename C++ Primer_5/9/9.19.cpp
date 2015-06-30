// =====================================================================================
//
//       Filename:  9.19.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月26日 13时35分27秒
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
#include <list>
#include <deque>
#include <forward_list>

int main(int argc, char *argv[])
{
        using namespace std;
        list<string>    slst;
        string          str;

        for (auto i = 0; i < 3; ++i)
        {
                getline(cin, str);
                slst.push_back(str);
        }
        list<string>::iterator  slst_it = slst.begin();
        while (slst_it != slst.end())
                cout << *slst_it++ << endl;

        return 0;
}
