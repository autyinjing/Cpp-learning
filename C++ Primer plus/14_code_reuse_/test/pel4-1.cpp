/*
 * =====================================================================================
 *
 *       Filename:  pel4-1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月19日 16时15分43秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "wine.h"

int main( int argc, char *argv[] )
{
	cout << "Enter name of wine: ";
	char 	lab[50];
	cin.getline(lab, 50);
	cout << "Enter number of years: ";
	int 	yrs;
	cin >> yrs;

	Wine 	holding(lab, yrs);
	holding.GetBottles();
	holding.Show();

	const int 	YRS = 3;

	int 	y[YRS] = {1993, 1995, 1998};
	int 	b[YRS] = {48, 60, 72};

	Wine 	more("Gushing Grape", YRS, y, b);
	more.Show();
	cout << "Total bottles for " << more.Label()
		<< ": " << more.sum() << endl;
	cout << "Bye.\n";

	return 0;
}
