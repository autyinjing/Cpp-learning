/*
 * =====================================================================================
 *
 *       Filename:  stock.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月14日 11时35分12秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <cstring>
#include "stock.h"

Stock::Stock()
{
	company = new char [1];
	company[0] = '\0';
	shares = 0;
	share_val = 0.0;
	total_val = 0.0;
}

Stock::Stock(const char * co, long n, double pr)
{
	len = std::strlen(co);
	company = new char [len+1];
	std::strcpy(company, co);
	if ( n < 0 )
	{
		std::cout << "Number of shares can't be negative; "
			<< company << " shares set to 0.\n";
		shares = 0;
	}
	else
	      shares = n;
	share_val = pr;
	set_tot();
}

Stock::~Stock()
{
	delete [] company;
}

void Stock::buy( long num, double price )
{
	if ( num < 0 )
	{
		std::cout <<"Number of shares purchased can't be negative. "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares += num;
		share_val = price;
		set_tot();
	}
}

void Stock::sell(long num, double price)
{
	using std::cout;
	if ( num < 0 )
	{
		cout << "Number of shares sold can't be negative. "
			<< "Transaction is aborted.\n";
	}
	else if ( num > shares )
	{
		cout << "You can't sell more than you have! "
			<< "Transaction is aborted.\n";
	}
	else
	{
		shares -= num;
		share_val = price;
		set_tot();
	}
}

void Stock::update( double price )
{
	share_val = price;
	set_tot();
}

std::ostream & operator<<( std::ostream & os, const Stock & s )
{
	using std::ios_base;
	ios_base::fmtflags 	orig = 
		std::cout.setf(ios_base::fixed, ios_base::floatfield);
	std::streamsize 	prec = std::cout.precision(3);
	os << "Company: " << s.company
		<< "  Shares: " << s.shares << '\n';
	os << "  Shares Price: $" << s.share_val;
	std::cout.precision(2);
	os << " Total Worth: $" << s.total_val << '\n';
	std::cout.setf(orig, ios_base::floatfield);
	std::cout.precision(prec);
	return os;
}

const Stock & Stock::topval(const Stock & s) const
{
	if ( s.total_val > total_val )
	      return s;
	else
	      return *this;
}
