// =====================================================================================
// 
//       Filename:  numstr.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月21日 19时23分00秒
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

	cout << "What year was your house built?\n";
	int 	year;
	cin >> year;
	cin.get();

	cout << "What is its street address?\n";
	char 	address[80];
	cin.getline(address, 80);
	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";

	return 0;
}

