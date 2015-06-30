/*
 * =====================================================================================
 *
 *       Filename:  22.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月07日 15时00分54秒
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

void 	strcount( std::string str );

int main( int argc, char *argv[] )
{
	using namespace std;
	string 	input;

	cout << "Enter a line:\n";
	getline(cin, input);
	while ( input[0] != '\0' )
	{
		strcount(input);
		cout << "Enter next line (empty line to quit):\n";
		getline(cin, input);
	}
	cout << "Bye\n";

	return 0;
}

void strcount( std::string str )
{
	using namespace std;
	static int 	total = 0;
	int 		count = 0;

	cout << "\"" << str << "\" contains ";
	for ( int i = 0; str[i]; i++ )
	      count++;
	total += count;
	cout << count << " characters\n";
	cout << total << " characters total\n";
}
