/*
 * =====================================================================================
 *
 *       Filename:  sales.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 10时05分35秒
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

using namespace std;
using SALES::QUARTERS;
using SALES::Sales;

void SALES::setSales( Sales & s, const double ar[], int n )
{
	double 	sum = 0;
	
	s.max = s.min = ar[0];
	for ( int i = 0; i < n; i++ )
	{
		s.sales[i] = ar[i];
		sum += ar[i];
		if ( s.max < ar[i] )
		      s.max = ar[i];
		if ( s.min > ar[i] )
		      s.min = ar[i];
	}
	s.average = sum / n;
}

void SALES::setSales( Sales & s )
{
	double 	sum = 0;
	
	cout << "sale: ";
	cin >> s.sales[0];
	s.max = s.min = s.sales[0];
	for ( int i = 1; i < QUARTERS; i++ )
	{
		cout << "sale: ";
		cin >> s.sales[i];
		sum += s.sales[i];
		if ( s.max < s.sales[i] )
		      s.max = s.sales[i];
		if ( s.min > s.sales[i] )
		      s.min = s.sales[i];
	}
	s.average = sum / QUARTERS;
}

void SALES::showSales( const  Sales & s )
{
	for ( int i = 0; i < QUARTERS; i++ )
	      cout << s.sales[i] << ' ';
	cout << "average: " << s.average << endl;
	cout << "max: " << s.max << endl;
	cout << "min: " << s.min << endl;
}
