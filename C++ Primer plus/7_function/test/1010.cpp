/*
 * =====================================================================================
 *
 *       Filename:  1010.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月27日 22时20分53秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

using namespace std;

const int 	Size = 4;

typedef double 	(*p_fun)( double, double );

double add( double, double );
double del( double, double );
double mut( double, double );
double dow( double, double );
double calculate( double, double, p_fun );

int main( int argc, char *argv[] )
{
	p_fun 	pa[Size] = { add, del, mut, dow };
	char 	cal[Size] = { '+', '-', '*', '/' };

	double 	x, y;

	while ( 1 )
	{
		cout << "x: ";
		cin >> x;
		cout << "y: ";
		cin >> y;
		if ( (x < 0.00001) || (y < 0.00001) )
		      break;
		for ( int i = 0; i < Size; i++ )
		      cout << cal[i] << ": " <<\
			      calculate(x, y, pa[i]) << endl;
	}

	return 0;
}

double add( double x, double y )
{
	return x + y;
}

double del( double x, double y )
{
	return x - y;
}

double mut( double x, double y )
{
	return x * y;
}

double dow( double x, double y )
{
	return x / y;
}

double calculate( double x, double y, p_fun fp )
{
	return fp(x, y);
}
