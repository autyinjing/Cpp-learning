// =====================================================================================
//
//       Filename:  10.7.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月08日 08时28分19秒
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
#include <algorithm>

int main(int argc, char *argv[])
{
        using namespace std;
        vector<int>     vec;
        vec.reserve(10);
        //fill_n(vec.begin(), 10, 0);
        fill_n(back_inserter(vec), 10, 1);
        for (auto val : vec)
                cout << val << ' ';
        cout << endl;

        return 0;
}
