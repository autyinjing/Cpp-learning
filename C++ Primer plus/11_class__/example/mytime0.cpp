/*
 * =====================================================================================
 *
 *       Filename:  mytime0.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月10日 16时31分57秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "mytime0.h"

Time::Time()
{
	hours = minutes = 0;
}

Time::Time( int h, int m )
{
	hours = h;
	minutes = m;
}

void Time::AddMin( int m )
{
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}

void Time::AddHr( int h )
{
	hours += h;
}

void Time::Reset( int h, int m )
{
	hours = h;
	minutes = m;
}

Time Time::Sum( const Time & t ) const
{
	Time 	sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours + sum.minutes / 60;
	sum.minutes %= 60;
	return sum;
}

void Time::Show() const
{
	std::cout << hours << " hours, " << minutes << "minutes";
}
