// =====================================================================================
// 
//       Filename:  6.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月21日 12时21分31秒
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

	int 		length, hight;

	cout << "Enter the length: ";
	cin >> length;
	cout << "Enter the hight: ";
	cin >> hight;

	cout << "Every use a shen oil can walk " << double (length) / double (hight) << " li!\n";

	return 0;
}

