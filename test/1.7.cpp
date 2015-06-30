/*
 * =====================================================================================
 *
 *       Filename:  1.7.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年03月26日 14时51分48秒
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

int     Sum(int a, int b);

int main(int argc, char *argv[])
{
	int     a, b, c;

        cin >> a >> b;
        c = Sum(a, b);
        cout << "Sum is " << c << endl;

	return EXIT_SUCCESS;
}

int Sum(int a, int b)
{
        return a + b;
}
