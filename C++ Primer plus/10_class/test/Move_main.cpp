/*
 * =====================================================================================
 *
 *       Filename:  Move_main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月10日 00时17分12秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "Move.h"

int main( int argc, char *argv[] )
{
	using namespace std;
	Move 	m1 = Move();
	m1.showmove();
	Move 	m2( 3.2, 5.5 );
	m2.showmove();
	Move 	m3;
	m3 = m1.add( m2 );
	m3.showmove();
	m2.reset();
	m2.showmove();

	return 0;
}
