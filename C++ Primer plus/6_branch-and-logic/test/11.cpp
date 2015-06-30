/*
 * =====================================================================================
 *
 *       Filename:  11.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月26日 14时56分16秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include <cctype>

int main( int argc, char *argv[] )
{
	using namespace std;

	char 	ch;

	while ( (cin.get(ch)) && (ch != '@') )
	{
		if ( isdigit(ch) )
		      continue;
		else if ( islower(ch) )
		      ch -= 32;
		else if ( isupper(ch) )
		      ch += 32;
		cout << ch;
	}

	return 0;
}
