/*
 * =====================================================================================
 *
 *       Filename:  namesp.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月05日 11时13分42秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

namespace pers
{
	struct 	Person
	{
		std::string 	fname;
		std::string 	lname;
	};
	void getPerson(Person &);
	void showPerson(const Person &);
}

namespace debts
{
	using namespace pers;
	struct Debt
	{
		Person 	name;
		double 	amount;
	};
	void getDebt(Debt &);
	void showDebt(const Debt &);
	double sumDebts(const Debt ar[], int n);
}
