/*
 * =====================================================================================
 *
 *       Filename:  77.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月26日 16时30分02秒
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
#include <string>

int main( int argc, char *argv[] )
{
	using namespace std;

	string 	str;
	int 	vow = 0, con = 0, oth = 0;

	cout << "Enter words (q to quit)\n";
	cin >> str;
	while ( str != "q" )
	{
		if ( isalpha(str[0]) )
		{
			switch( str[0] )
			{
				case 'a': ++vow;
					  break;

				case 'e': ++vow;
					  break;

				case 'i': ++vow;
					  break;

				case 'o': ++vow;
					  break;

				case 'u': ++vow;
					  break;

				default: ++con;
			}
		}
		else
		      ++oth;
		cin >> str;
	}

	cout << vow << " words beginning with vowels\n";
	cout << con << " words beginning with vowels\n";
	cout << oth << " others\n";

	return 0;
}
