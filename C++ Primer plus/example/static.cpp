/*
 * =====================================================================================
 *
 *       Filename:  static.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月05日 10时10分31秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

const int 	ArSize = 10;

void strcount( const char * str );

int main( int argc, char *argv[] )
{
	using namespace std;
	char 	input[ArSize];
	char 	next;

	cout << "Enter a line:\n";
	cin.get(input, ArSize);
	while ( cin )
	{
		cin.get(next);
		while ( next != '\n' )
		      cin.get(next);
		strcount( input );
		cout << "Enter next line (empty line to quit):\n";
		cin.get(input, ArSize);
	}
	cout << "Bye\n";

	return 0;
}

void strcount( const char * str )
{
	using namespace std;
	static int 	total = 0;
	int 		count = 0;

	cout << "\"" << str << "\" contains ";
	while ( *str++ )
	      count++;
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}
