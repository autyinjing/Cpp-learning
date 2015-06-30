// =====================================================================================
//
//       Filename:  16.4.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年11月03日 12时42分06秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>
#include <vector>
#include <list>
#include <string>

using namespace std;

template<typename It, typename T>
It find(It beg, It end, const T &val);

int main(int argc, char *argv[])
{
        vector<int>     ivec{1, 3, 5, 7, 9};
        list<string>    slst{"honey", "aut", "yinjing", "liu"};

        auto    iit = find(ivec.begin(), ivec.end(), 2);
        if (iit != ivec.end())
                cout << *iit << endl;

        auto    sit = find(slst.begin(), slst.end(), "hone");
        if (sit != slst.end())
                cout << *sit << endl;

        return false;
}

template<typename It, typename T>
It find(It beg, It end, const T &val)
{
        auto    ret = beg;
        while (ret != end)
                if (*ret == val)
                        break;
                else
                        ++ret;
        return ret;
}
