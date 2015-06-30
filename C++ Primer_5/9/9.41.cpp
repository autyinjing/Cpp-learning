// =====================================================================================
//
//       Filename:  9.41.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月26日 16时44分57秒
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
        vector<char>    cvec{'a', 'b', 'c', 'd', 'e','f'};
        string          s1(cvec.begin(), cvec.end());

        //for (auto c : cvec)
          //      s1 += c;
        
        cout << s1 << endl;

        return 0;
}
