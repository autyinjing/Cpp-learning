// =====================================================================================
//
//       Filename:  11.31.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月09日 10时56分41秒
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
#include <algorithm>
#include <map>

using namespace std;

int main(int argc, char *argv[])
{
        multimap<string, string>        author{{"yinjing", "aut"}, {"yufen", "honey"}};
        string          sch;

        for_each(author.cbegin(), author.cend(), [](const pair<string, string> &a)
                                                { cout << a.first << ' ' << a.second << endl; });
        while (1)
        {
                cout << "Enter the searched: ";
                cin >> sch;
                if (sch == "quit")
                        break;
                auto it = author.find(sch);
                if (it != author.end())
                        author.erase(it);
        }
        for_each(author.cbegin(), author.cend(), [](const pair<string, string> &a)
                                                { cout << a.first << ' ' << a.second << endl; });

        return 0;
}
