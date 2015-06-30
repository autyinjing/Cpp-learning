// =====================================================================================
//
//       Filename:  10.1_.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月08日 07时18分30秒
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
        vector<int>     ivec{1, 3, 3, 1, 4, 2, 2, 3, 3, 6, 10};
        
        for (auto val : ivec)
                cout << val << ' ';
        cout << endl;
        int     input;
        while (cin >> input)
        {
                cout << "The " << input << "'s time is "
                        << count(ivec.begin(), ivec.end(), input) << endl;
        }

        return 0;
}
