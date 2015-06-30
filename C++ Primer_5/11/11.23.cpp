// =====================================================================================
//
//       Filename:  11.23.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月09日 10时24分29秒
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
        multimap<string, string>        name;
        string  fname, lname;

        while (1)
        {
                cout << "fname: ";
                cin >> fname;
                if (fname == "quit")
                        break;
                cout << "lname: ";
                cin >> lname;
                name.insert(make_pair(fname, lname));
        }
        for (const auto &val : name)
                cout << val.first << ' ' << val.second << endl;

        return 0;
}

