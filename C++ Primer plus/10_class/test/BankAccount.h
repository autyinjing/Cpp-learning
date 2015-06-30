/*
 * =====================================================================================
 *
 *       Filename:  BankAccount.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 22时04分27秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	BANK_H_
#define 	BANK_H_

#include <string>

class BankAccount
{
	private:
		std::string 	m_name;
		std::string 	m_account;
		double 		m_balance;
	public:
		BankAccount();
		BankAccount(const std::string & name, const std::string & account, double balance);
		~BankAccount() {}
		void 	show();
		void 	deposit(double cash);
		void 	withdraw(double cash);
};

#endif
