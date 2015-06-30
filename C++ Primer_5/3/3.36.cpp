// =====================================================================================
//
//       Filename:  3.36.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月22日 16时41分16秒
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

int main()
{
        using namespace std;
        int     iarr[] = {1, 3, 5, 7, 9};
        int     iarr_[] = {1, 3, 5, 7, 8};
        int *ip = begin(iarr), *ip_ = begin(iarr_);
        for (; ip != end(iarr); ++ip, ++ip_)
                if (*ip != *ip_)
                        break;
        if (ip == end(iarr))
                cout << "==" << endl;
        else
                cout << "!=" << endl;

        vector<int>     ivec{1, 3, 5, 7, 9};
        vector<int>     ivec_{1, 3, 5, 7, 9};

        if (ivec == ivec_)
                cout << "==\n";
        else
                cout << "!=\n";

        return 0;
}
