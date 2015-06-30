// =====================================================================================
//
//       Filename:  9.4.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月25日 21时07分19秒
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

int main(int argc, char *argv[])
{
        using namespace std;
        bool search(vector<int>::iterator, vector<int>::iterator, int);
        vector<int>     ivec{1, 3, 4, 5, 6, 8};
        auto    beg = ivec.begin(), end = ivec.end();

        for (auto val : {1, 2, 3, 4, 5})
                cout << search(beg, end, val) << ' ';

        return 0;
}

bool search(std::vector<int>::iterator beg, std::vector<int>::iterator end, int val)
{
        while (beg != end)
                if (*beg == val)
                        return true;
                else
                        ++beg;
        return false;
}
