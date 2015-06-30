/*
 * =====================================================================================
 *
 *       Filename:  stack_main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月14日 13时12分02秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "stack.h"

int main( int argc, char *argv[] )
{
	{
	using namespace std;
	Stack 	s1(7);
	int 	j;
	
	for ( int i = 0; i < 10; i++ )
	      s1.push(i);
	for ( int i = 0; i < 10; i++ )
	{
		s1.pop(j);
		cout << j << endl;
	}
	Stack 	s2 = s1;

	for ( int i = 0; i < 10; i++ )
	{
		s2.pop(j);
		cout << j << endl;
	}
	}

	return 0;
}
