/*
 * =====================================================================================
 *
 *       Filename:  1.8.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年03月26日 14时54分42秒
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

int     &f(int &k);

int main(int argc, char *argv[])
{
	int     k = 0;
        int     &m = f(k);

        cout << k << endl;
        m = 20;
        cout << k << endl;

	return EXIT_SUCCESS;
}

int &f(int &k)
{
        return k += 10;
}
