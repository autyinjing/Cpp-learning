/*
 * =====================================================================================
 *
 *       Filename:  22.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月25日 19时54分19秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>

int main( int argc, char *argv[] )
{
	using namespace std;

	string 		name, dessert;

	cout << "Enter your name:\n";
	getline(cin, name);
	cout << "Enter your favorite dessert:\n";
	getline(cin, dessert);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

	return 0;
}
