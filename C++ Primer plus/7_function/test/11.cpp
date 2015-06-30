/*
 * =====================================================================================
 *
 *       Filename:  11.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月27日 15时13分18秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

double fun( double, double );

int main( int argc, char *argv[] )
{
	using namespace std;

	double 	average;
	double 	x, y;

	while ( 1 )
	{
		cout << "Enter two number: ";
		cin >> x >> y;
		if ( (x < 0.00001) || (y < 0.00001) )
		      break;
		average = fun( x, y );
		cout << "Average is " << average << endl;
	}

	return 0;
}

double fun( double x, double y )
{
	return 2.0 * x * y / ( x + y );
}
