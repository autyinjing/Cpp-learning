// =====================================================================================
//
//       Filename:  16.19.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年11月03日 13时48分11秒
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
        vector<int>     ivec{1, 3, 5, 7, 9};
        //list<string>    slst{"honey", "aut", "yin"};
        string          str{'h', 'o', 'n', 'e', 'y'};

        print(ivec);
        print(str);

        return false;
}

template<typename T>
void print(const T &val)
{
        for (typename T::size_type i = 0; i != val.size(); ++i)
                cout << val[i] << endl;
}
