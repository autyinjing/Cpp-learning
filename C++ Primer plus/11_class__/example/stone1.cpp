/*
 * =====================================================================================
 *
 *       Filename:  stone1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月10日 22时18分56秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "stonewt1.h"

int main( int argc, char *argv[] )
{
	using std::cout;
	Stonewt poppins(9, 2.8);
	double 	p_wt = poppins;
	cout << "Convert to double => ";
	cout << "Poppins: " << p_wt << " pounds.\n";
	cout << "Convert to int => ";
	cout << "Poppins: " << int (poppins) << " pounds.\n";

	return 0;
}
