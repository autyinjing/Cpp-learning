/*
 * =====================================================================================
 *
 *       Filename:  cow.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月13日 23时23分53秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include "cow.h"
#include <cstring>
#include <iostream>

Cow::Cow()
{
	hobby = new char [1];
	hobby = '\0';
	weight = 0.0;
}

Cow::Cow(const char * nm, const char * ho, double wt)
{
	std::strcpy(name, nm);
	hobby = new char [std::strlen(ho)+1];
	std::strcpy(hobby, ho);
	weight = wt;
}

Cow::Cow(const Cow &c)
{
	std::strcpy(name, c.name);
	hobby = new char [std::strlen(c.hobby)+1];
	std::strcpy(hobby, c.hobby);
	weight = c.weight;
}

Cow::~Cow()
{
	name[0] = '\0';
	delete [] hobby;
}

Cow & Cow::operator=(const Cow & c)
{
	std::strcpy(name, c.name);
	hobby = new char [std::strlen(c.name)+1];
	std::strcpy(hobby, c.hobby);
	weight = c.weight;
	return *this;
}

void Cow::ShowCow() const
{
	std::cout << "name: " << name << std::endl;
	std::cout << "hobby: " << hobby << std::endl;
	std::cout << "weight: " << weight << std::endl;
}
