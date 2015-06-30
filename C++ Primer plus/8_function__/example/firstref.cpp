/*
 * =====================================================================================
 *
 *       Filename:  firstref.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月29日 10时56分58秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

int main( int argc, char *argv[] )
{
	using namespace std;
	int 	rats = 101;
	int 	& rodents = rats;
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	rodents++;
	cout << "rats = " << rats;
	cout << ", rodents = " << rodents << endl;
	cout << "rats address = " << &rats;
	cout << ", rodents address = " << &rodents << endl;

	return 0;
}
