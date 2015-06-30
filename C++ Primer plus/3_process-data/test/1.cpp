// =====================================================================================
// 
//       Filename:  1.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月21日 11时19分18秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

int main(int argc, char *argv[])
{
	using namespace std;

	int 		hight;
	const int 	Trans = 12;

	cout << "Enter your hight:____" << "\b\b\b\b";
	cin >> hight;
	cout << "your hight is " << hight / Trans << " chi";
	cout << " and " << hight % Trans << " cun !\n";

	return 0;
}

