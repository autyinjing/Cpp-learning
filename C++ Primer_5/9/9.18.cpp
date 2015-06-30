// =====================================================================================
//
//       Filename:  9.18.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月26日 13时30分17秒
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
        string  str;
        deque<string>   sdq;

        for (auto i = 0; i < 3; ++i)
        {
                getline(cin, str);
                sdq.push_back(str);
        }
        deque<string>::iterator sdq_it = sdq.begin();
        while (sdq_it != sdq.end())
                cout << *sdq_it++ << endl;

        return 0;
}

