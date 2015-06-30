/*
 * =====================================================================================
 *
 *       Filename:  11.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月25日 19时45分43秒
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
	char 	grade;
	int 	age;

	cout << "What is your first name? ";
	getline(cin, fname);
	cout << "What is your last name? ";
	getline(cin, lname);
	cout << "What letter grade do you deserve? ";
	cin >> grade;
	cout << "What is your age? ";
	cin >> age;

	cout << "Name: " << lname << ',' << fname << endl;
	cout << "Grade: " << ++grade << endl;
	cout << "Age: " << age << endl;

	return 0;
}
