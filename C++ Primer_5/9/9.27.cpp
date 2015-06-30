// =====================================================================================
//
//       Filename:  9.27.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月26日 15时07分26秒
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
        forward_list<int>       iflst{1, 2, 3, 4, 5, 6, 7, 8};
        auto    prev = iflst.before_begin();
        auto    curr = iflst.begin();

        for (auto val : iflst)
                cout << val << ' ';
        cout << endl;
        while (curr != iflst.end())
                if (*curr % 2)
                        curr = iflst.erase_after(prev);
                else
                {
                        prev = curr;
                        ++curr;
                }
        for (auto val : iflst)
                cout << val << ' ';
        cout << endl;

        return 0;
}
