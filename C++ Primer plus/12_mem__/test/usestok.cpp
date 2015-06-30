/*
 * =====================================================================================
 *
 *       Filename:  usestok.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月14日 11时53分30秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "stock.h"

const int 	STKS = 4;

int main( int argc, char *argv[] )
{
	Stock 	stocks[STKS] = 
	{
		Stock("NanoSmart", 12, 20.0),
		Stock("Boffo Objects", 200, 2.0),
		Stock("Monolithic Obelisks", 130, 3.25),
		Stock("Fleep Enterprises", 60, 6.5)
	};

	std::cout << "Stock holdings:\n";
	int 	st;
	for ( st = 0; st < STKS; st++ )
	      std::cout << stocks[st];
	const Stock * top = &stocks[0];
	for ( st = 1; st < STKS; st++ )
	      top = &top->topval(stocks[st]);
	std::cout << "\nMost valuable holding:\n";
	std::cout << top;

	return 0;
}
