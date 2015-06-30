// =====================================================================================
// 
//       Filename:  strtype3.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月21日 20时01分18秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>
#include <cstring>
#include <string>

int main( void )
{
	using namespace std;

	char 	charr1[20];
	char 	charr2[20] = "jaguar";
	string 	str1;
	string 	str2 = "panther";

	str1 = str2;
	strcpy(charr1, charr2);

	str1 += " paste";
	strcat(charr1, " juice");

	int 	len1 = str1.size();
	int 	len2 = strlen(charr1);

	cout << "The string " << str1 << " contains "
		<< len1 << " characters.\n";
	cout << "The string " << charr1 << " contains "
		<< len2 << " characters.\n";

	return 0;
}

