/*
 * =====================================================================================
 *
 *       Filename:  carrots.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月20日 10时46分21秒
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

	int 	carrots;

	carrots = 25;
	cout << "I have ";
	cout << carrots;
	cout << " carrots.";
	cout << endl;
	carrots = carrots - 1;
	cout << "Crunch, crunch. Now I have " << carrots << " carrots." << endl;


	return 0;
}
