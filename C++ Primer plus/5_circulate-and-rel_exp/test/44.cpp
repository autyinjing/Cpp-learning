/*
 * =====================================================================================
 *
 *       Filename:  44.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月26日 10时31分55秒
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

	unsigned daphne, cleo, years;

	daphne = cleo = 100;
	years = 0;

	while ( cleo <= daphne )
	{
		daphne += 10;
		cleo += cleo * 0.05;
		++years;
	}
	cout << "over the " << years << " years.\n";
	cout << "daphne has " << daphne << "$\n";
	cout << "cleo has " << cleo << "$\n";

	return 0;
}
