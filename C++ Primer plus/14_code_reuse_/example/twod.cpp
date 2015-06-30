/*
 * =====================================================================================
 *
 *       Filename:  twod.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月16日 21时16分33秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "arraytp.h"

int main( int argc, char *argv[] )
{
	using std::cout;
	using std::endl;
	ArrayTP<int, 10> sums;
	ArrayTP<double, 10> aves;
	ArrayTP< ArrayTP<int, 5>, 10> twodee;

	int i, j;

	for ( i = 0; i < 10; i++ )
	{
		sums[i] = 0;
		for ( j = 0; j < 5; j++ )
		{
			twodee[i][j] = (i + 1) * (j + 1);
			sums[i] += twodee[i][j];
		}
		aves[i] = (double) sums[i] / 10;
	}
	for ( i = 0; i < 10; i++ )
	{
		for ( j = 0; j < 5; j++ )
		{
			cout.width(2);
			cout << twodee[i][j] << ' ';
		}
		cout << ": sum = ";
		cout.width(3);
		cout << sums[i] << ", average = " << aves[i] << endl;
	}

	cout << "Done.\n";

	return 0;
}
