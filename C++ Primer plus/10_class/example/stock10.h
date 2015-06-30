/*
 * =====================================================================================
 *
 *       Filename:  stock10.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 17时16分34秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	STOCK10_H_
#define 	STOCK10_H_

#include <string>

class Stock
{
	private:
		std::string 	company;
		long 		shares;
		double 		share_val;
		double 		total_val;
		void 		set_tot() { total_val = shares * share_val; }
	public:
		Stock();
		Stock(const std::string & co, long n = 0, double pr = 0.0);
		~Stock();
		void 	buy(long num, double price);
		void 	sell(long num, double price);
		void 	update(double price);
		void 	show();
};

#endif
