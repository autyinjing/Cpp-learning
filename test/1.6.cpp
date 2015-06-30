/*
 * =====================================================================================
 *
 *       Filename:  1.6.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年03月26日 14时40分53秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  aut (yinjing), linuxeryinjing@gmail.com
 *        Company:  Information and Computing Science 1201
 *
 * =====================================================================================
 */

#include <iostream>
#include <cstdlib>

using namespace std;

int     GetLcd(int a, int b);

int main(int argc, char *argv[])
{
        int     a, b;

        cout << "Enter two number: ";
        cin >> a >> b;

        GetLcd(a, b);

	return EXIT_SUCCESS;
}

int GetLcd(int a, int b)
{
        int     min, lcd;

        min = a < b ? a : b;
        for (lcd = 2; lcd < min; lcd++)
                if ((a % lcd == 0) && (b % lcd == 0)) {
                        break;
                }
        if (lcd == min) {
                cout << "No common denominators" << endl;
        } else {
                cout << "The lowest common denominators is " << lcd << endl;
        }
        return 0;
}
