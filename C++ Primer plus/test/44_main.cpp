/*
 * =====================================================================================
 *
 *       Filename:  44_main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 10时23分26秒
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

int main( int argc, char *argv[] )
{
	using namespace std;
	using namespace SALES;

	Sales 	s[2];
	double 	d_ar[QUARTERS] = { 1.55, 5.15, 3.14, 6.22 };

	setSales( s[0] );
	setSales( s[1], d_ar, QUARTERS );
	for ( int i = 0; i < 2; i++ )
	      showSales( s[i] );

	return 0;
}
