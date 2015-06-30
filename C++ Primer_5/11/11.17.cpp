// =====================================================================================
//
//       Filename:  11.17.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月09日 10时07分16秒
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
#include <set>
#include <iterator>

using namespace std;

int main(int argc, char *argv[])
{
        multiset<string>        c;
        vector<string>          v;

//        copy(v.begin(), v.end(), inserter(c, c.end()));
//       copy(v.begin(), v.end(), back_inserter(c));
        copy(c.begin(), c.end(), inserter(v, v.end()));
        copy(c.begin(), c.end(), back_inserter(v));

        return 0;
}
