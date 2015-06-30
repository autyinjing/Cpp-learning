/*
 * =====================================================================================
 *
 *       Filename:  file1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月05日 12时09分34秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

extern void print_dou_ave( int a, int b );

static int average( int a, int b )
{
	return (a + b) / 2;
}

int main( int argc, char *argv[] )
{
	using namespace std;
	cout << average( 3, 12 ) << endl;
	print_dou_ave( 3, 12 );

	return 0;
}
