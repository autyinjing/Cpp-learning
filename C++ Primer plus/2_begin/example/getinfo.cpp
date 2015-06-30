/*
 * =====================================================================================
 *
 *       Filename:  getinfo.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月20日 10时51分54秒
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

	int carrots;

	cout << "How many carrots do you have?" << endl;
	cin >> carrots;
	cout << "Here are two more.";
	carrots = carrots + 2;
	cout << "Now you have " << carrots << " carrots." << endl;

	return 0;
}
