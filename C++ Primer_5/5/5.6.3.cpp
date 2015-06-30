// =====================================================================================
//
//       Filename:  5.6.3.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月23日 14时51分29秒
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
#include <stdexcept>

int main()
{
        using namespace std;
        int     i, j;
        
        while (cin >> i >> j)
        {
                try
                {
                        if (j == 0)
                                throw runtime_error("Error!");
                        cout << i / j << endl;
                } catch (runtime_error err)
                {
                        cout << err.what()
                                << "Try Again? Enter y or n" << endl;
                        char    c;
                        cin >> c;
                        if (!cin || c == 'n')
                                break;
                }
        }

        return 0;
}

