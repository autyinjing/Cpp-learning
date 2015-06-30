// =====================================================================================
//
//       Filename:  9.31.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月26日 15时52分47秒
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
        list<int>       ilst{1, 2, 3, 4, 5, 6, 7};
        forward_list<int>       iflst{8, 9, 10, 11, 12};

        auto    lit = ilst.begin();
        auto    flit = iflst.begin();

        while (lit != ilst.end())
        {
                if (*lit % 2)
                {
                        lit = ilst.emplace(lit, *lit);
                        ++lit;
                        ++lit;
                }
                else
                        lit = ilst.erase(lit);
        }
        for (auto val : ilst)
                cout << val << ' ';
        cout << endl;

        auto    prev = iflst.before_begin();
        while (flit != iflst.end())
        {
                if (*flit % 2)
                {
                        flit = iflst.insert_after(flit, *flit);
                        prev = flit++;
                }
                else
                        flit = iflst.erase_after(prev);
        }
        for (auto val : iflst)
                cout << val << ' ';
        cout << endl;

        return 0;
}
