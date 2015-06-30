/*
 * =====================================================================================
 *
 *       Filename:  55.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月27日 16时44分49秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

long 	mut( long );

int main( int argc, char *argv[] )
{
	using namespace std;

	long 	num;

	while ( 1 )
	{
		cout << "num: ";
		cin >> num;
		if ( num < 0 )
		      break;
		cout << num << "! = " << mut(num) << endl;
	}

	return 0;
}

long mut( long num )
{
	if ( num == 0 )
	      return 1;
	return num * mut(num - 1);
}
