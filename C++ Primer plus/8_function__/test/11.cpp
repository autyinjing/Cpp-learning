/*
 * =====================================================================================
 *
 *       Filename:  11.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月04日 20时07分44秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

void print( const char * str, int n = 1 );

int main( int argc, char *argv[] )
{
	using namespace std;
	char 	str[] = "Hello world!\n";

	print( str );
	print( str, 0 );
	print( str, 2 );

	return 0;
}

void print( const char * str, int n )
{
	if ( n != 0 )
	      std::cout << str;
}
