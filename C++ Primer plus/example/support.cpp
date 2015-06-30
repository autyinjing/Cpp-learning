/*
 * =====================================================================================
 *
 *       Filename:  support.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月05日 00时13分33秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

extern 	double warming;

void 	update( double dt );
void 	local();

using 	std::cout;

void update( double dt )
{
	extern double 	warming;
	warming += dt;
	cout << "Update global warming to " << warming;
	cout << " degrees.\n";
}

void local()
{
	double warming = 0.8;

	cout << "Local warming = " << warming << " degrees.\n";
	cout << "" << ::warming;
	cout << " degrees.\n";
}
