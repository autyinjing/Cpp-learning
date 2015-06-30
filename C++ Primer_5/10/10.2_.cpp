// =====================================================================================
//
//       Filename:  10.2_.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月08日 07时23分10秒
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
        list<string>    slst{"fuck", "bich", "shit", "shit", "bich",
                        "bich", "bich", "and you", "soga", "Fuck"};
        string          input;

        for (const auto &s : slst)
                cout << s << ' ';
        cout << endl;
        while (getline(cin, input))
                cout << "The " << input << "'s times is "
                        << count(slst.begin(), slst.end(), input) << endl;

        return 0;
}

