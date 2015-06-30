/*
 * =====================================================================================
 *
 *       Filename:  usebrass1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月14日 19时13分48秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "brass.h"

int main( int argc, char *argv[] )
{
	using std::cout;
	using std::endl;

	Brass 		Piggy("Porcelot Pigg", 381299, 4000.00);
	BrassPlus 	Hoggy("Horatio Hogg", 382288, 3000.00);
	Piggy.ViewAcct();
	cout << endl;
	Hoggy.ViewAcct();
	cout << endl;
	cout << "Depositing $1000 into the Hogg Account:\n";
	Hoggy.Deposit(1000.00);
	cout << "New balance: $" << Hoggy.Balance() << endl;
	cout << "Withdrawing $4200 from the Piggy Account:\n";
	Piggy.Withdraw(4200.00);
	cout << "Pigg account balance: $" << Piggy.Balance() << endl;
	cout << "Withdrawing $4200 from the Hogg Account:\n";
	Hoggy.Withdraw(4200.00);
	Hoggy.ViewAcct();

	return 0;
}
