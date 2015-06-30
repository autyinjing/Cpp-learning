// =====================================================================================
// 
//       Filename:  5.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月21日 12时13分46秒
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

	long long 	usa, all;

	cout << "Enter the all:__________\b\b\b\b\b\b\b\b\b\b";
	cin >> all;
	cout << "Enter the usa:_________\b\b\b\b\b\b\b\b\b";
	cin >> usa;

	cout << "The pop of USA is " << double (usa) / double (all) * 100 << "% of the world pop!\n";

	return 0;
}

