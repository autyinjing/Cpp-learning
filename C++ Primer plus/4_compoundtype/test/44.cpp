/*
 * =====================================================================================
 *
 *       Filename:  55.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月25日 20时11分16秒
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

	string 	fname, lname;

	cout << "Enter your first name: ";
	getline(cin, fname);
	cout << "Enter your last name: ";
	getline(cin, lname);

	lname += ", ";
	lname += fname;

	cout << "Here's the information in a single string: " << lname << endl;

	return 0;
}
