// =====================================================================================
// 
//       Filename:  2.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 12时09分41秒
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

	string 		name, dessert;

	cout << "Enter your name:\n";
	getline(cin, name);
	cout << "Enter your favorites dessert:\n";
	getline(cin, dessert);

	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

	return 0;
}

