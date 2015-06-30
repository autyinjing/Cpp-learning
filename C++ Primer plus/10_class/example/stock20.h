/*
 * =====================================================================================
 *
 *       Filename:  stock20.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 18时52分04秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	STOCK20_H_
#define 	STOCK20_H_

#include <string>

class Stock
{
	private:
		std::string 	company;
		int 		shares;
		double 		share_val;
		double 		total_val;
		void 		set_tot() { total_val = shares * share_val; }
	public:
		Stock();
		Stock(const std::string & co, long n = 0, double pr = 0.0);
		~Stock();
		void 		buy(long num, double price);
		void 		sell(long num, double price);
		void 		update(double price);
		void 		show() const;
		const Stock & 	topval(const Stock & s) const;
};

#endif
