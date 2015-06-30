// =====================================================================================
//
//       Filename:  9.26.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月26日 14时29分24秒
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
        int     ia[] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 55, 89};
        vector<int>     ivec;
        list<int>       ilst;

        for (auto val : ia)
        {
                ivec.emplace_back(val);
                ilst.push_back(val);
        }

        for (auto it = ivec.begin(); it != ivec.end();)
                if (*it % 2 == 0)
                        it = ivec.erase(it);
                else
                        ++it;
        for (auto it = ilst.begin(); it != ilst.end();)
                if (*it % 2)
                        it = ilst.erase(it);
                else
                        ++it;
        for (auto val : ia)
                cout << val << ' ';
        cout << endl;
        for (auto val : ivec)
                cout << val << ' ';
        cout << endl;
        for (auto val : ilst)
                cout << val << ' ';
        cout << endl;

        return 0;
}
