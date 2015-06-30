/*
 * =====================================================================================
 *
 *       Filename:  88.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月26日 11时30分44秒
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

int main( int argc, char *argv[] )
{
	using namespace std;

	const char	str_Size = 15;
	char 		str[str_Size];
	int 		count = 0;

	cin >> str;
	while ( strcmp(str, "done") )
	{
		cin >> str;
		++count;
	}

	cout << "Total " << count << " words.\n";

	return 0;
}
