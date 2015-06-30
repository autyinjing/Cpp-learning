/*
 * =====================================================================================
 *
 *       Filename:  55.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月26日 10时48分06秒
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

	const unsigned Months = 12;
	int 	sells[Months];
	int 	sum = 0;
	string 	month[Months] = 
	{
		"一月","二月","三月","四月","五月","六月",
		"七月","八月","九月","十月","十一月","十二月"
	};

	for ( unsigned i = 0; i < Months; ++i )
	{
		cout << month[i] << ": ";
		cin >> sells[i];
		sum += sells[i];
	}

	cout << "Total selled " << sum << endl;

	return 0;
}
