// =====================================================================================
//
//       Filename:  9.50.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月27日 13时16分36秒
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
        vector<string>  svec{"3.14", "42.0", "15.6", "689", "0.17"};
        double       sum = 0;

        for (auto val : svec)
               cout << val << ' ';
        cout << endl;
        for (auto s : svec)
                sum += stod(s);
        cout << "The sum = " << sum <<endl;

        return 0;
}
