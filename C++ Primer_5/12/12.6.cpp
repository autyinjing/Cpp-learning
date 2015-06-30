// =====================================================================================
//
//       Filename:  12.6.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月10日 09时07分34秒
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
        
vector<int> *new_vector();
void read_input();
void print(vector<int> *vp);

int main(int argc, char *argv[])
{
        read_input();

        return 0;
}

vector<int> *new_vector()
{
        auto    vp = new vector<int>;
        return vp;
}

void read_input()
{
        auto    vp = new_vector();
        int     val;

        while (cin >> val)
                vp->push_back(val);
        print(vp);
}

void print(vector<int> *vp)
{
        for (const auto &val : *vp)
                cout << val << ' ';
        cout << endl;

        delete vp;
}
