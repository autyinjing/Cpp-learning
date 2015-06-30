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
#ifndef 	MYTIME0_H_
#define 	MYTIME0_H_

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
		Time 	Sum( const Time & t ) const;
		void 	Show() const;
};

#endif
