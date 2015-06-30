// =====================================================================================
//
//       Filename:  6.33.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月23日 19时13分06秒
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
        
using namespace std;

int main()
{
        void print(vector<int> vec, vector<int>::size_type size = 0);
        vector<int> ivec = {1, 2, 3, 4, 5};

        print(ivec, 0);

        return 0;
}

void print(vector<int> ivec, vector<int>::size_type size)
{
        if (size == ivec.size())
        {
#ifndef NDEBUG
        cerr << "FILE: " << __FILE__ << endl
                << "function: " << __func__ << endl
                << "line:" << __LINE__ << endl
                << "time: " << __TIME__ << endl;
#endif
        return;
        }
        cout << ivec[size++] << ' ';
        print(ivec, size);
}
