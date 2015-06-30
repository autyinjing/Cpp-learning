/*
 * =====================================================================================
 *
 *       Filename:  sales.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 23时20分02秒
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
	const int QUARTERS = 4;
	
	class Sales
	{
		private:
			double 	sales[QUARTERS];
			double 	average;
			double 	max;
			double 	min;
		public:
			Sales();
			Sales(const double ar[], int n);
			~Sales() {}
			void showSales() const;
	};
}

#endif
