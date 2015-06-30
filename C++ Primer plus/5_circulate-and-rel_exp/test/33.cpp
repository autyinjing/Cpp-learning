/*
 * =====================================================================================
 *
 *       Filename:  33.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月26日 10时26分19秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

int main( int argc, char *argv[] )
{
	using namespace std;

	int 	sum = 0, temp;

	cin >> temp;
	while( temp )
	{
		sum += temp;
		cout << "sum = " << sum << endl;
		cin >> temp;
	}

	return 0;
}
