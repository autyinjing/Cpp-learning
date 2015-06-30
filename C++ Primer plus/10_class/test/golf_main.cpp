/*
 * =====================================================================================
 *
 *       Filename:  golf_main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 23时11分00秒
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

int main( int argc, char *argv[] )
{
	using namespace std;
	golf 	g1;
	golf 	g2 ("yinjing", 5);

	g1.show();
	g2.show();
	g1 = g1.setgolf();
	g2.sethandicap(8);
	g1.show();
	g2.show();

	return 0;
}
