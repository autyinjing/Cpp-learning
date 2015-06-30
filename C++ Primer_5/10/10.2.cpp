// =====================================================================================
//
//       Filename:  10.2.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月03日 10时04分32秒
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
        list<string>    slst{"OK", "soga", "and you", "OK", "OK", "soga", "nobody", "just soso"};
        string          input;
        auto            beg = slst.begin(), end = slst.end();

        for (auto val : slst)
                cout << val << endl;
        while (1)
        {
                cout << "Enter a string(q to quit): ";
                getline(cin, input);
                if (input == "q")
                        break;
                cout << "The string " << input << "'s times is " << count(beg, end, input) << endl;
        }

        return 0;
}

