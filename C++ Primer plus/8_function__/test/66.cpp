/*
 * =====================================================================================
 *
 *       Filename:  66.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月04日 21时24分23秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstring>

template <class T>
T maxn( T arr[], int n );

template <> 
const char * maxn( const char * str[], int n );

int main( int argc, char *argv[] )
{
	using namespace std;
	int 		iarr[6] = { 1, 3, 5, 6, 4, 2 };
	double 		darr[4] = { 2.0, 5.0, 3.0, 10.0 };
	const char 	*str[] = 
	{
		"China",
		"Japan",
		"Chinese",
		"Japanese",
		"USA"
	};

	cout << "The max in iarray: " << maxn( iarr, 6 ) << endl;
	cout << "The max in darray: " << maxn( darr, 4 ) << endl;
	cout << "The longest string is " << maxn( str, 5 ) << endl;

	return 0;
}

template <class T>
T maxn( T arr[], int n )
{
	T 	max = arr[0];
	for ( int i = 1 ; i < n; i++ )
	      if ( max < arr[i] )
		    max = arr[i];
	return max;
}

template <>
const char * maxn( const char * str[], int n )
{
	const char  * strp = str[0];
	for ( int i = 1; i < n; i++ )
	      if ( strlen(strp) < strlen(str[i]) )
		    strp = str[i];
	return strp;
}
