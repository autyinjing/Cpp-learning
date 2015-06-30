/*
 * =====================================================================================
 *
 *       Filename:  stock00.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 11时31分30秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	STOCK00_H_
#define 	STOCK00_H_

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
		void 		acquire(const std::string & co, long n, double pr);
		void 		buy(long num, double price);
		void 		sell(long num, double price);
		void 		update(double price);
		void 		show();
};

#endif		
