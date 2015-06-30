/*
 * =====================================================================================
 *
 *       Filename:  33.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月25日 20时04分47秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstring>

int main( int argc, char *argv[] )
{
	using namespace std;

	const int  	NameSize = 10;
	char 		fname[NameSize], lname[NameSize], name[2*NameSize];

	cout << "Enter your first name: ";
	cin.getline(fname, NameSize);
	cout << "Enter your last name: ";
	cin.getline(lname, NameSize);

	strcpy(name, lname);
	strcat(name, ", ");
	strcat(name, fname);

	cout << "Here's the information in a single string: " << name << endl;

	return 0;
}
