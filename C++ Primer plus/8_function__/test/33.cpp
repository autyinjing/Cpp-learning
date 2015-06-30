/*
 * =====================================================================================
 *
 *       Filename:  33.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月04日 20时34分00秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

string Toupper( string & str );

int main( int argc, char *argv[] )
{
	string 	str;

	while ( 1 )
	{
		cout << "Enter a string(q to quit): ";
		getline(cin, str);
		if ( str == "q" )
		      break;
		Toupper( str );
		cout << str << endl;
	}
	cout << "Bye.\n";

	return 0;
}

string Toupper( string & str )
{
	for ( int i = 0; str[i]; i++ )
	      str[i] = toupper(str[i]);
	return str;
}
