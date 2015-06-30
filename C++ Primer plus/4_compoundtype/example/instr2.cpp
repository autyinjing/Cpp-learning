// =====================================================================================
// 
//       Filename:  instr2.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月21日 19时06分37秒
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
	
	const int 	ArSize = 20;
	char 		name[ArSize];
	char 		dessert[ArSize];

	cout << "Enter your name: ";
	cin.getline(dessert, ArSize).getline(name, ArSize);
	cout << "Enter your favorite dessert: ";
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

	return 0;
}

