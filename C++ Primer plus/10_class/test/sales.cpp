/*
 * =====================================================================================
 *
 *       Filename:  sales.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 23时26分35秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "sales.h"

using namespace SALES;

Sales::Sales()
{
	using std::cout;
	using std::cin;
	double 	sum = 0;
	bool 	flag = true;

	for ( int i = 0; i < QUARTERS; i++ )
	{
		cin >> sales[i];
		if ( flag == true )
		{
			flag = false;
			max = min = sales[i];
		}
		sum += sales[i];
		if ( max < sales[i] )
		      max = sales[i];
		if ( min > sales[i] )
		      min = sales[i];
	}
	average = sum / QUARTERS;
}

Sales::Sales( const double ar[], int n )
{
	double 	sum = 0;
	bool 	flag = true;

	for ( int i = 0; i < n; i++ )
	{
		sales[i] = ar[i];
		if ( flag == true )
		{
			flag = false;
			max = min = ar[i];
		}
		sum += ar[i];
		if ( max < ar[i] )
		      max = ar[i];
		if ( min > ar[i] )
		      min = ar[i];
	}
	average = sum / n;
}

void Sales::showSales() const
{
	using std::cout;
	using std::endl;
	for ( int i = 0; i < QUARTERS; i++ )
	      cout << sales[i] << "  ";
	cout << endl;
	cout << max << endl;
	cout << min << endl;
	cout << average << endl;
}
