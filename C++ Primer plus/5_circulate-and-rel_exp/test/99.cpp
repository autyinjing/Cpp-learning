/*
 * =====================================================================================
 *
 *       Filename:  99.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月26日 11时53分31秒
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

int main( int argc, char *argv[] )
{
	using namespace std;

	string 	str;
	int 	count = 0;

	cin >> str;
	while ( str != "done" )
	{
		++count;
		cin >> str;
	}
	cout << "Total " << count << endl;

	return 0;
}
