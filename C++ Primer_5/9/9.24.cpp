// =====================================================================================
//
//       Filename:  9.24.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月26日 14时19分52秒
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
        vector<int>     ivec{1};

        cout << ivec.at(0) << ' ' << ivec[0] << ' ' << ivec.front() << ' ' << *ivec.begin() << endl;

        return 0;
}
