/*
 * =====================================================================================
 *
 *       Filename:  List_main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月10日 16时08分37秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "List.h"

void print( Item & item )
{
	std::cout << item << std::endl;
}

int main( int argc, char *argv[] )
{
	using namespace std;
	List 	l1;

	cout << l1.isempty() << endl;
	cout << l1.isfull() << endl;
	for ( int i = 0; i < 16; i++ )
	      l1.add( i );
	l1.visit(print);
	cout << l1.isempty() << endl;
	cout << l1.isfull() << endl;

	return 0;
}
