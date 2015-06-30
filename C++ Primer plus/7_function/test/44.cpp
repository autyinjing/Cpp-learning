/*
 * =====================================================================================
 *
 *       Filename:  44.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月27日 16时34分26秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

long double 	probability( long double, unsigned int );

int main( int argc, char *argv[] )
{
	using namespace std;
	
	long double 	total;
	unsigned int 	choices;

	cout << "Total: ";
	cin >> total;
	cout << "Choices: ";
	cin >> choices;
	cout << probability(total, choices) / 27.0 << endl;

	return 0;
}

long double probability( long double total, unsigned int choices )
{
	long double 	result = 1.0, all;
	unsigned int 	num;

	for ( all = total, num = choices; num > 0; num--, all-- )
	      result = result * num / all;
	return result;
}
