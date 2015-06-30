/*
 * =====================================================================================
 *
 *       Filename:  sales_main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 23时42分00秒
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
	Sales 	s1 = Sales();
	double 	d_ar[] = { 1.56, 2.33, 0.54, 4.11 };
	Sales 	s2(d_ar, QUARTERS);

	s1.showSales();
	s2.showSales();

	return 0;
}
