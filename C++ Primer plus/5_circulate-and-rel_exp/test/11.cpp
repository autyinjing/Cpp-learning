/*
 * =====================================================================================
 *
 *       Filename:  11.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月26日 10时10分43秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

int main( int argc, char *argv[] )
{
	using namespace std;

	int 	low, high, sum = 0;

	cout << "low: ";
	cin >> low;
	cout << "high: ";
	cin >> high;

	for ( int i = low; i <= high; ++i )
	      sum += i;

	cout << "the sum is " << sum << endl;

	return 0;
}
