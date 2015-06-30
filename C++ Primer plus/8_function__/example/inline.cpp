/*
 * =====================================================================================
 *
 *       Filename:  inline.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月29日 10时46分49秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

inline double square( double x ) { return x * x; }

int main( int argc, char *argv[] )
{
	using namespace std;
	double 	a, b;
	double 	c = 13.0;

	a = square(5.0);
	b = square(4.5 + 7.5);
	cout << "a = " << a << ", b = " << b << "\n";
	cout << "c = " << c;
	cout << ", c squared = " << square(c++) << "\n";
	cout << "Now c = " << c << "\n";

	return 0;
}
