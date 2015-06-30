// =====================================================================================
// 
//       Filename:  instr3.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月21日 19时13分56秒
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
	cin.get(name, ArSize).get();
	cout << "Enter your favorite dessert: ";
	cin.get(dessert, ArSize).get();
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

	return 0;
}

