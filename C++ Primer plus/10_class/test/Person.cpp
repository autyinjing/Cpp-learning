/*
 * =====================================================================================
 *
 *       Filename:  Person.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 22时34分50秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "Person.h"

Person::Person(const std::string & ln, const char * fn)
{
	lname = ln;
	for ( int i = 0; fn[i]; i++ )
	      fname[i] = fn[i];
}

void Person::Show() const
{
	using std::cout;
	using std::endl;
	cout << fname << ' ' << lname << endl;
}

void Person::FormalShow() const
{
	using std::cout;
	using std::endl;
	cout << lname << ", " << fname << endl;
}
