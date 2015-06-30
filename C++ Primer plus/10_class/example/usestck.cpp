/*
 * =====================================================================================
 *
 *       Filename:  usestck.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 12时20分45秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "stock00.h"

int main( int argc, char *argv[] )
{
	Stock 	fluffy_the_cat;

	fluffy_the_cat.acquire("NanoSmart", 20, 12.50);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(15, 18.125);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(400, 20.00);
	fluffy_the_cat.show();
	fluffy_the_cat.buy(300000, 40.125);
	fluffy_the_cat.show();
	fluffy_the_cat.sell(300000, 0.125);
	fluffy_the_cat.show();

	return 0;
}
