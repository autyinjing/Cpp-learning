// =====================================================================================
//
//       Filename:  10.3_.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月08日 07时32分33秒
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
        vector<double>     ivec{1.1, 3, 5.3, 7.6, 2, 4, 6, 8.1, 10};

        cout << "The sum is " << accumulate(ivec.cbegin(), ivec.cend(), 0.0) << endl;

        return 0;
}
