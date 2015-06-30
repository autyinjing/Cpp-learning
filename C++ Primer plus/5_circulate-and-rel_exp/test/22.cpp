/*
 * =====================================================================================
 *
 *       Filename:  22.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月26日 10时16分17秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include <array>

int main( int argc, char *argv[] )
{
	const int 	ArSize = 16;
	std::array<long double, ArSize> factorials;

	factorials[1] = factorials[0] = 1L;
	for ( int i = 2; i < ArSize; ++i )
	      factorials[i] = i * factorials[i-1];
	for ( int i = 0; i < ArSize; ++i )
	      std::cout << i << "! = " << factorials[i] << std::endl;

	return 0;
}
