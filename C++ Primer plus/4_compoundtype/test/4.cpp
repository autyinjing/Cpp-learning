// =====================================================================================
// 
//       Filename:  4.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 12时25分20秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>
#include <string>

int main( void )
{
	using namespace std;

	string 	fname, lname;

	cout << "Enter your first name: ";
	getline(cin, fname);
	cout << "Enter your last name: ";
	getline(cin, lname);

	fname = fname + ", " + lname;

	cout << "Here's the information in a single string: " << fname << endl;

	return 0;
}

