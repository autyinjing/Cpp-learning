/*
 * =====================================================================================
 *
 *       Filename:  left.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月04日 10时01分12秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

const int 	ArSize = 80;

char 		* left( const char * str, int n = 1 );

int main( int argc, char *argv[] )
{
	using namespace std;

	char 	sample[ArSize];
	cout << "Enter a string:\n";
	cin.get(sample, ArSize);
	char 	* ps = left(sample, 4);
	cout << ps << endl;
	delete [] ps;
	ps = left(sample);
	cout << ps << endl;
	delete [] ps;

	return 0;
}

char * left( const char * str, int n )
{
	if ( n < 0 )
	      n = 0;
	char 	* p = new char[n+1];
	int 	i;
	for ( i = 0; i < n && str[i]; i++ )
	      p[i] = str[i];
	while ( i <= n )
	      p[i++] = '\0';
	return p;
}
