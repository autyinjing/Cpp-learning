/*
 * =====================================================================================
 *
 *       Filename:  Person_main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 22时39分58秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "Person.h"

int main( int argc, char *argv[] )
{
	using namespace std;

	Person 	p1;
	Person 	p2("yin", "jing");

	p1.Show();
	p1.FormalShow();
	p2.Show();
	p2.FormalShow();

	p1 = Person("honey");
	p1.Show();
	p1.FormalShow();

	return 0;
}
