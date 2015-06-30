/*
 * =====================================================================================
 *
 *       Filename:  cow_main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月13日 23时37分43秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "cow.h"

int main( int argc, char *argv[] )
{
	using namespace std;
	Cow 	c1("honey", "yinjing", 87.0);
	c1.ShowCow();
	Cow 	c2 = Cow("abcdefg", "gfedcba", 11.2);
	c2.ShowCow();
	Cow 	c3 = c1;
	c3.ShowCow();

	return 0;
}
