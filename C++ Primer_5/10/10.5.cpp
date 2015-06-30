// =====================================================================================
//
//       Filename:  10.5.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月08日 07时40分08秒
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
        vector<const char *>  cvec{"fuck", "shit", "bich", "cbich"};
        list<const char *>    clst{"fuck", "shit", "bich"};

        cout << equal(cvec.cbegin(), cvec.cend(), clst.cbegin()) << endl;

        return 0;
}
