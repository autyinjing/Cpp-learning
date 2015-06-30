/*
 * =====================================================================================
 *
 *       Filename:  55.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月04日 21时06分24秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include <array>

using namespace std;

template <class T>
T max5( const array<T, 5> );

int main( int argc, char *argv[] )
{
	array<int, 5> iarr = { {1, -3, 2, 6, 4} };
	array<double, 5> darr = { {3.0, -5.0, 22.0, 51.0, 100.0} }; 	

	cout << "The max int: " << max5(iarr) << endl;
	cout << "The max double: " << max5(darr) << endl;

	return 0;
}

template <class T>
T max5( const array<T, 5> tarr )
{
	T 	max = tarr[0];
	for ( int i = 1; i < 5; i++ )
	      if ( max < tarr[i] )
		    max = tarr[i];
	return 	max;
}
