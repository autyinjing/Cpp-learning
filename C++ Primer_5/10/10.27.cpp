// =====================================================================================
//
//       Filename:  10.27.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月08日 11时07分29秒
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
        //template <typename T> void print(const T &vec);

        void print(const list<int> &ilst);
        void print(const vector<int> &ivec);
        vector<int>     ivec{1, 3, 2, 4, 4, 2, 7, 10, 3};
        list<int>       ilst_b, ilst_f, ilst_i;

        print(ivec);
        sort(ivec.begin(), ivec.end());
        print(ivec);
        unique_copy(ivec.begin(), ivec.end(), back_inserter(ilst_b));
        print(ilst_b);
        unique_copy(ivec.begin(), ivec.end(), front_inserter(ilst_f));
        print(ilst_f);
        unique_copy(ivec.begin(), ivec.end(), inserter(ilst_i, ilst_i.begin()));
        print(ilst_i);

        return 0;
}

//template <typename T>
void print(const vector<int> &ivec)
{
        for (auto val : ivec)
                cout << val << ' ';
        cout << endl;
}

void print(const list<int> &ilst)
{
        for (auto val : ilst)
                cout << val << ' ';
        cout << endl;
}
