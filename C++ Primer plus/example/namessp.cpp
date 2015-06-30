/*
 * =====================================================================================
 *
 *       Filename:  namessp.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月05日 11时21分48秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "namesp.h"

void other( void );
void another( void );

int main( int argc, char *argv[] )
{
	using debts::Debt;

	using debts::showDebt;
	Debt 	golf = { { "Benny", "Goatsniff" }, 120.0 };
	showDebt(golf);
	other();
	another();

	return 0;
}

void other( void )
{
	using std::cout;
	using std::endl;
	using namespace debts;
	Person dg = { "Doodles", "Glister" };
	showPerson(dg);
	cout << endl;
	Debt 	zippy[3];
	int 	i;
	for ( i = 0; i < 3; i++ )
	      getDebt(zippy[i]);

	for ( i = 0; i < 3; i++ )
	      showDebt(zippy[i]);
	cout << "Total debt: $" << sumDebts(zippy, 3) << endl;
	return;
}

void another( void )
{
	using pers::Person;
	Person collector = { "Milo", "Rightshift" };
	pers::showPerson(collector);
	std::cout << std::endl;
}
