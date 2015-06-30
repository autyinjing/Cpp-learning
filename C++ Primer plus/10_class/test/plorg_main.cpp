/*
 * =====================================================================================
 *
 *       Filename:  glorg_main.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月10日 15时37分55秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "plorg.cpp"

int main( int argc, char *argv[] )
{
	using namespace std;
	plorg 	p1;
	plorg 	p2("honey", 87);

	p1.show();
	p2.show();

	p1.reset_ci( -88 );
	p1.show();

	return 0;
}
