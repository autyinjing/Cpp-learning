// =====================================================================================
// 
//       Filename:  3.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 12时20分40秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>
#include <cstring>

int main( void )
{
	using namespace std;

	char 	fname[20], lname[10];

	cout << "Enter your first name: ";
	cin.getline(fname, 20);
	cout << "Enter your last name: ";
	cin.get(lname, 20).get();

	strcat(fname, ", ");
	strcat(fname, lname);
	
	cout << "Here's the information in a single string: " << fname << endl;

	return 0;
}

