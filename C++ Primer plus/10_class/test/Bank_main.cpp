/*
 * =====================================================================================
 *
 *       Filename:  Bank_main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 22时18分53秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "BankAccount.h"

int main( int argc, char *argv[] )
{
	using namespace std;
	BankAccount 	b1;
	BankAccount 	b2 = BankAccount("honey", "18292074157", 5000000.0);

	b1.show();
	b2.show();

	b1.deposit(500000.0);
	b2.withdraw(1000000.0);

	b1.show();
	b2.show();

	return 0;
}
