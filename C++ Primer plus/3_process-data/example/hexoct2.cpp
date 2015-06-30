// =====================================================================================
// 
//       Filename:  hexoct2.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月20日 17时06分09秒
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

	int 	chest = 42;
	int 	waist = 42;
	int 	inseam = 42;

	cout << "Monsueur cuts a striking figure!" << endl;
	cout << "chest = " << chest << " (decimal for 42)" << endl;
	//cout << hex;
	cout << "waist = " << hex << waist << " (hexadecimal for 42)" << endl;
	cout << oct;
	cout << "inseam = " << inseam << " (octal for 42)" << endl;

	return 0;
}

