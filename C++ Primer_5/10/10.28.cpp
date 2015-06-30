// =====================================================================================
//
//       Filename:  10.28.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月08日 11时26分54秒
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
#include <functional>

using namespace std;
using namespace std::placeholders;

int main(int argc, char *argv[])
{
        vector<int>     ivec{1, 2, 3, 4, 5, 6, 7, 8, 9};
        list<int>       ilst;
        deque<int>      ideq;
        forward_list<int>       ifst;

        copy(ivec.begin(), ivec.end(), inserter(ilst, ilst.begin()));
        copy(ivec.begin(), ivec.end(), back_inserter(ideq));
        copy(ivec.begin(), ivec.end(), front_inserter(ifst));
        for (auto val : ilst)
                cout << val << ' ';
        cout << endl;
        for (auto val : ideq)
                cout << val << ' ';
        cout << endl;
        for (auto val : ifst)
                cout << val << ' ';
        cout << endl;

        return 0;
}
