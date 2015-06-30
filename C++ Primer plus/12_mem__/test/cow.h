/*
 * =====================================================================================
 *
 *       Filename:  cow.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月13日 23时21分02秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	COW_H_
#define 	COW_H_

class Cow
{
	private:
		char 	name[20];
		char 	* hobby;
		double 	weight;
	public:
		Cow();
		Cow(const char * nm, const char * ho, double wt);
		Cow(const Cow &c);
		~Cow();
		Cow & operator=(const Cow & c);
		void ShowCow() const;
};

#endif
