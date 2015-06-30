/*
 * =====================================================================================
 *
 *       Filename:  sales.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 10时02分29秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	SALES_H_
#define 	SALES_H_

namespace SALES
{
	const int 	QUARTERS = 4;
	struct Sales
	{
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	};

	void setSales(Sales & s, const double ar[], int n);
	void setSales(Sales & s);
	void showSales(const Sales & s);
}

#endif
