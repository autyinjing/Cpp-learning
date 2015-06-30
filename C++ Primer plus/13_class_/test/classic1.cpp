/*
 * =====================================================================================
 *
 *       Filename:  classic.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月15日 10时23分51秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "classic.h"
#include <cstring>

using std::strcpy;

Cd::Cd(const char * s1, const char * s2, int n, double x)
{
	strcpy(performers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d)
{
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
}

void Cd::Report() const
{
	using std::cout;
	using std::endl;
	cout << "performers: " << performers << endl;
	cout << "label: " << label << endl;
	cout << "selections: " << selections << endl;
	cout << "playtime: " << playtime << endl;
}

Cd & Cd::operator=(const Cd & d)
{
	if ( this == &d )
	      return *this;
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(const char * s1, const char * s2, int n, double x, const char * w) :
	Cd(s1, s2, n, x)
{
	strcpy(works, w);
}

Classic::Classic(const Cd & c, const char * w) : Cd(c)
{
	strcpy(works, w);
}

Classic::Classic(const Classic & c) : Cd(c)
{
	strcpy(works, c.works);
}

void Classic::Report() const
{
	Cd::Report();
	std::cout << "Works: " << works << std::endl;
}
