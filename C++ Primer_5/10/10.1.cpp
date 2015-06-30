// =====================================================================================
//
//       Filename:  10.1.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月03日 09时54分08秒
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

int main(int argc, char *argv[])
{
        using namespace std;
        vector<int>     ivec{1, 3, 2, 5, 4, 6, 10, 3, 3, 2, 4, 1, 6};
        auto            beg = ivec.begin(), end = ivec.end();
        int             input = 1;

        for (auto val : ivec)
                cout << val << ' ';
        cout << endl;
        while (input)
        {
                cout << "Enter a number(0 to quit): ";
                cin >> input;
                cout << "The number's times is " << count(beg, end, input) << endl;
        }

        return 0;
}
