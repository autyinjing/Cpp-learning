// =====================================================================================
// 
//       Filename:  1.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 12时01分17秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

int main( void )
{
	using namespace std;

	char 	fname[10], lname[10];
	cout << "What is your first name?";
	cin.getline(fname, 10);
	cout << "What is your last name?";
	(cin >> lname).get();

	char 	grade;
	cout << "What letter grade do you deserve?";
	cin >> grade;
	
	int 	age;
	cout << "What is your age?";
	cin >> age;

	cout << "name: " << lname << ", " << fname << endl;
	cout << "Grade: " << char (grade + 1) << endl;;
	cout << "Age: " << age << endl;

	return 0;
}

