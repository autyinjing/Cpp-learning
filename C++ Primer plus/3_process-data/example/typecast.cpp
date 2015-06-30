// =====================================================================================
// 
//       Filename:  typecast.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月21日 10时39分30秒
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

	int 	auks, bats, coots;

	auks = 19.99 + 11.99;

	bats = (int) 19.99 + (int) 11.99;
	coots = int (19.99) + int (11.99);
	cout << "auks = " << auks << ", bats = " << bats;
	cout << ", coots = " << coots << endl;

	char 	ch = 'Z';
	cout << "The code for " << ch << " is ";
	cout << int(ch) << endl;
	cout << "Yes, the code is ";
	cout << static_cast<int>(ch) << endl;

	return 0;
}

