// =====================================================================================
//
//       Filename:  16.20.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年11月03日 13时55分51秒
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

template<typename T>
void print(const T &val);

int main(int argc, char *argv[])
{
        vector<int>     ivec{1, 2, 3, 4, 5};
        list<string>    slst{"honey", "aut", "yin"};

        print(ivec);
        print(slst);

        return false;
}

template<typename T>
void print(const T &val)
{
        for (typename T::const_iterator beg = val.cbegin();
                        beg != val.cend(); ++beg)
                cout << *beg << endl;
}
