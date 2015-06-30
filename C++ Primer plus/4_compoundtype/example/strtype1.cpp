// =====================================================================================
// 
//       Filename:  strtype1.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月21日 19时30分47秒
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

	char 	charr1[20];
	char 	charr2[20] = "jaguar";
	string 	str1;
	string 	str2 = "panther";

	cout << "Enter a kind of feline: ";
	cin >> charr1;
	cout << "Enter another kind of feline: ";
	cin >> str1;
	cout << "Here are some felines: ";
	cout << charr1 << " " << charr2 << " "
		<< str1 << " " << str2 << endl;
	cout << "The third letter in " << charr2 << " is "
		<< charr2[2] << endl;
	cout << "The third letter in " << str2 << " is "
		<< str2[2] << endl;

	return 0;
}

