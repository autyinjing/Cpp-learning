// =====================================================================================
// 
//       Filename:  instr1.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月21日 19时00分04秒
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

	cout << "Enter your name : \n";
	cin >> name;
	cout << "Enter your favorite dessert:\n";
	cin >> dessert;
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name << ".\n";

	return 0;
}

