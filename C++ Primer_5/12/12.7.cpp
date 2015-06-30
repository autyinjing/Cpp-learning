// =====================================================================================
//
//       Filename:  12.7.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月10日 09时15分43秒
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
#include <memory>

using namespace std;

shared_ptr<vector<int>> new_vector();
void input();
void print(const shared_ptr<vector<int>> &sp);

int main(int argc, char *argv[])
{
        input();

        return 0;
}

shared_ptr<vector<int>> new_vector()
{
        return make_shared<vector<int>>();
}

void input()
{
        auto    sp = new_vector();
        int     val;

        while (cin >> val)
                sp->push_back(val);
        print(sp);
}

void print(const shared_ptr<vector<int>> &sp)
{
        for (const auto &val : *sp)
                cout << val << ' ';
        cout << endl;
}
