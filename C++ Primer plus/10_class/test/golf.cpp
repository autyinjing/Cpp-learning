/*
 * =====================================================================================
 *
 *       Filename:  golf.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 23时01分54秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "golf.h"

golf::golf()
{
	fullname = "no name";
	handicap = 0;
}

golf::golf( const std::string & name, int hc )
{
	fullname = name;
	handicap = hc;
}

const golf & golf::setgolf()
{
	using std::cout;
	using std::cin;
	using std::string;
	string 	name;
	int 	hc;
	cout << "name: ";
	cin >> name;
	cout << "handicap: ";
	cin >> hc;
	fullname = name;
	handicap = hc;

	return *this;
}

void golf::sethandicap( int hc )
{
	handicap = hc;
}

void golf::show() const
{
	using std::cout;
	using std::endl;
	cout << "name: " << fullname << endl;
	cout << "handicap: " << handicap << endl;
}
