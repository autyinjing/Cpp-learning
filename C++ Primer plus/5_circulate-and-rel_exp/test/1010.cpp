/*
 * =====================================================================================
 *
 *       Filename:  1010.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月26日 11时56分55秒
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
	int 	num;
	
	cout << "num: ";
	cin >> num;

	for ( int i = 0; i < num; ++i )
	{
		for ( int j = 0; j < num - i - 1; ++j )
		      cout << '.';
		for ( int k = 0; k < i + 1; ++k )
		      cout << '*';
		cout << endl;
	}

	return 0;
}
