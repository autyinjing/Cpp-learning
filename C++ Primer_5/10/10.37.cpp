// =====================================================================================
//
//       Filename:  10.37.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月08日 13时42分16秒
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
#include <iterator>

using namespace std;
using namespace std::placeholders;

int main(int argc, char *argv[])
{
        vector<int>     ivec{0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
        list<int>       ilst;

        auto    beg = ivec.rbegin(), end = ivec.rend();
        int     val = 2;

        //copy_if(beg, end, back_inserter(ilst), 
          //              [&val]()->int { if (val) return !(--val);
            //                            else true; });
        while (val--)
        {
                ++beg;
                --end;
        }
        copy(beg, end, back_inserter(ilst));
        for (auto val : ilst)
                cout << val << ' ';
        cout << endl;

        return 0;
}
