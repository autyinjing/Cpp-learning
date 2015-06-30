/*
 * =====================================================================================
 *
 *       Filename:  BankAccount.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 22时08分37秒
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

BankAccount::BankAccount()
{
	m_name = "no name";
	m_account = "no account";
	m_balance = 0.0;
}

BankAccount::BankAccount(const std::string & name, const std::string & account, double balance)
{
	m_name = name;
	m_account = account;
	m_balance = balance;
}

void BankAccount::show()
{
	using std::cout;
	using std::endl;
	cout << m_name << endl;
	cout << m_account << endl;
	cout << m_balance << endl;
}

void BankAccount::deposit(double cash)
{
	m_balance += cash;
}

void BankAccount::withdraw(double cash)
{
	if ( m_balance - cash <= 0.00001 )
	      std::cout << "Your don't have enough money!\n";
	else
	      m_balance -= cash;
}
