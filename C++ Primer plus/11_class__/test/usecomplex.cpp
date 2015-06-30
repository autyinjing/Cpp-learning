/*
 * =====================================================================================
 *
 *       Filename:  usecomplex.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月11日 16时44分01秒
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
#include "complex0.h"

int main( int argc, char *argv[] )
{
	Complex a(3.0, 4.0);
	Complex c;
	int 	i = 1;

	cout << "Enter a complex number (q to quit):\n";
	while ( i-- )
	{
		cout << "c is " << c << '\n';
		cout << "complex conjugate is " << ~c << '\n';
		cout << "a is " << a << '\n';
		cout << "a + c" << a + c << '\n';
		cout << "a - c" << a - c << '\n';
		cout << "a * c" << a * c << '\n';
		cout << "2 * c" << 2 * c << '\n';
		cout << "c * 2" << c * 2 << '\n';
		cout << "Enter a complex number (q to quit):\n";
	}
	cout << a << endl;
	cout << "Done!\n";

	return 0;
}
