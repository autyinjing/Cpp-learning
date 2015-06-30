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
using std::strlen;

Cd::Cd(const char * s1, const char * s2, int n, double x)
{
	performers = new char [strlen(s1)+1];
	label = new char [strlen(s2)+1];
	strcpy(performers, s1);
	strcpy(label, s2);
	selections = n;
	playtime = x;
}

Cd::Cd(const Cd & d)
{
	performers = new char [strlen(d.performers)+1];
	label = new char [strlen(d.label)+1];
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
	delete [] performers;
	delete [] label;
	performers = new char [strlen(d.performers)+1];
	label = new char [strlen(d.label)+1];
	strcpy(performers, d.performers);
	strcpy(label, d.label);
	selections = d.selections;
	playtime = d.playtime;
	return *this;
}

Classic::Classic(const char * s1, const char * s2, int n, double x, const char * w) :
	Cd(s1, s2, n, x)
{
	works = new char [strlen(w)+1];
	strcpy(works, w);
}

Classic::Classic(const Cd & c, const char * w) : Cd(c)
{
	works = new char [strlen(w)+1];
	strcpy(works, w);
}

Classic::Classic(const Classic & c) : Cd(c)
{
	works = new char [strlen(c.works)+1];
	strcpy(works, c.works);
}

void Classic::Report() const
{
	Cd::Report();
	std::cout << "Works: " << works << std::endl;
}

Classic & Classic::operator=(const Classic & c)
{
	if ( this == &c )
	      return *this;
	Cd::operator=(c);
	delete [] works;
	works = new char [strlen(c.works)+1];
	strcpy(works, c.works);
	return *this;
}
