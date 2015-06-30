// =====================================================================================
//
//       Filename:  11.12.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月09日 09时37分15秒
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
        vector<pair<string, int>>       vp;
        string  s_in;
        int     i_in;

        while (cin >> s_in >> i_in)
        {
                vp.push_back(make_pair(s_in, i_in));
        }
        for (const auto &val : vp)
                cout << val.first << ' ' << val.second << endl;

        return 0;
}
