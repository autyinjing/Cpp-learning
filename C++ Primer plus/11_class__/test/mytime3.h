/*
 * =====================================================================================
 *
 *       Filename:  mytime0.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月10日 16时29分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	MYTIME1_H_
#define 	MYTIME1_H_

#include <iostream>

class Time
{
	private:
		int 	hours;
		int 	minutes;
	public:
		Time();
		Time( int h, int m = 0 );
		void 	AddMin( int m );
		void 	AddHr( int n );
		void 	Reset( int h = 0, int m = 0 );
		friend Time 	operator+( const Time & t1, const Time & t2 );
		friend Time 	operator-( const Time & t1, const Time & t2 );
		friend Time 	operator*( const Time & t, double m );
		friend Time  	operator*( double m, const Time & t )
		{ return t * m; }
		friend std::ostream & operator<<(std::ostream & os, const Time & t);
		void 	Show() const;
};

#endif
