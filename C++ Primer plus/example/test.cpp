/*
 * =====================================================================================
 *
 *       Filename:  test.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月05日 08时14分21秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "test_.h"

void out( void );

int 	b = a;

int main( int argc, char *argv[] )
{
	using namespace std;
	cout << a << endl;
	out();

	return 0;
}

void out( void )
{
	using namespace std;
 	extern 	int 	a ;
	cout << a << endl;
	cout << b << endl;
}
