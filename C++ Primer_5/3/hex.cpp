// =====================================================================================
//
//       Filename:  hex.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月21日 18时13分08秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>
#include <string>

int main()
{
        using namespace std;
        const string    hex = "0123456789ABCDEF";
        cout << "Enter a series of number between 0 and 15: " << endl;
        string  result;
        string::size_type n;
        while (cin >> n)
                if (n < hex.size())
                        result += hex[n];
                else
                        break;
        cout << result << endl;

        return 0;
}

