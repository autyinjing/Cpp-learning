// =====================================================================================
//
//       Filename:  9.5.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月25日 21时20分16秒
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
#include <cctype>

using   namespace std;
using   ivec_it = vector<int>::iterator;
ivec_it search(ivec_it beg, ivec_it end, int val);

int main(int argc, char *argv[])
{
        vector<int>     ivec{1, 3, 5, 7, 9, 10};
        ivec_it         beg = ivec.begin(), end = ivec.end();
        auto            it = search(beg, end, 6);

        if (it == end)
                cout << "Don't search!\n";
        else
                cout << *it << endl;

        return 0;
}

ivec_it search(ivec_it beg, ivec_it end, int val)
{
        while (beg != end)
                if (*beg == val)
                        return beg;
                else
                        ++beg;
        return end;
}
