// =====================================================================================
//
//       Filename:  11.7.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月09日 09时05分23秒
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
#include <utility>

using namespace std;

int main(int argc, char *argv[])
{
        map<string, vector<string>>             family;
        vector<pair<string, string>>            n_birth;
        string  fname, lname, birth;

        while (1)
        {
                cout << "Enter the family name: ";
                cin >> fname;
                if (fname == "quit")
                        break;
                cout << "Enter the last name: ";
                cin >> lname;
                family[fname].push_back(lname);
                cout << "Enter the birthday: ";
                cin >> birth;
                n_birth.push_back(make_pair(lname, birth));
        }
        for (const auto &f : family)
        {
                cout << "Family: " << f.first << endl;
                cout << "Member: ";
                for (const auto &m : f.second)
                        cout << m << ' ';
                cout << endl;
        }
        for (const auto &nb : n_birth)
                cout << nb.first << ' ' << nb.second << endl;

        return 0;
}
