// =====================================================================================
//
//       Filename:  9.20.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月26日 13时38分33秒
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
        list<int>       ilst{1, 2, 3, 4, 5, 6, 7, 8, 9};
        deque<int>      idq1, idq2;
        list<int>::iterator     ilst_beg = ilst.begin(), ilst_end = ilst.end();

        while (ilst_beg != ilst_end)
                if (*ilst_beg % 2 == 1) //奇数
                        idq1.emplace_back(*ilst_beg++);
                else                    //偶数
                        idq2.emplace_back(*ilst_beg++);
        for (auto l : ilst)
                cout << l << ' ';
        cout << endl;
        for (auto d : idq1)
                cout << d << ' ';
        cout << endl;
        for (auto d : idq2)
                cout << d << ' ';
        cout << endl;

        return 0;
}
