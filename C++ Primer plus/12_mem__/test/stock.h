/*
 * =====================================================================================
 *
 *       Filename:  stock.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月14日 11时23分41秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	STOCK_H_
#define 	STOCK_H_

#include <iostream>

class Stock
{
	private:
		char 	 	* company;
		int 		len;
		int 		shares;	
		double 		share_val;
		double 		total_val;
		void 		set_tot() { total_val = shares * share_val; }
	public:
		Stock();
		Stock(const char * co, long n = 0, double pr = 0.0);
		~Stock();
		void buy(long num, double price);
		void sell(long num, double price);
		void update(double price);
		friend std::ostream & operator<<(std::ostream & os, const Stock & s);
		const Stock & topval(const Stock & s) const;
};

#endif

