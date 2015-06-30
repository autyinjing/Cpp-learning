/*
 * =====================================================================================
 *
 *       Filename:  tabtenn0.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月14日 15时51分51秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include "tabtenn0.h"
#include <iostream>

TableTennisPlayer::TableTennisPlayer(const string & fn,
		const string & ln, bool ht) : firstname(fn),
			lastname(ln),hasTable(ht) {}

void TableTennisPlayer::Name() const
{
	std::cout << lastname << ", " << firstname;
}

RatedPlayer::RatedPlayer(unsigned int r, const string & fn,
		const string & ln, bool ht) : TableTennisPlayer(fn, ln, ht)
{
	rating = r;
}

RatedPlayer::RatedPlayer(unsigned int r, const TableTennisPlayer & tp)
		: TableTennisPlayer(tp), rating(r)
{
}
