/*
 * =====================================================================================
 *
 *       Filename:  22.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月26日 15时37分14秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include <array>

int main( int argc, char *argv[] )
{
	using namespace std;
	const 	int 	Size = 10;

	double 	donation, average, sum = 0.0;
	array<double, Size> don;
	int 	count = 0, i = 0;

	while ( (cin >> donation) && (i < Size) )
	{
		don[i++] = donation;
		sum += donation;
	}

	average = sum / i;
	for ( int j = 0; j < i; ++j )
	      if ( don[j] > average )
		    count++;

	cout << "average: " << average << endl;
	cout << "count: " << count << endl;;

	return 0;
}
