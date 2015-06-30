/*
 * =====================================================================================
 *
 *       Filename:  twofile2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月05日 10时03分04秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

extern 	int 	tom;
static 	int 	dick = 10;
int 		harry = 200;

void remote_access( void )
{
	using namespace std;
	cout << "remote_access() report the follow addresses:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
}
