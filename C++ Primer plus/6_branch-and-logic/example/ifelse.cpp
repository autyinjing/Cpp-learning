// =====================================================================================
// 
//       Filename:  ifelse.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年03月05日 13时05分50秒
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

	char 	ch;

	cout << "Type, and I shall repeat.\n";
	cin.get(ch);
	while ( ch != '.' )
	{
		if ( ch == '\n' )
		      cout << ch;
		else
		      cout << ++ch;
		cin.get(ch);
	}
	cout << "\nPlease excuse the slight confusion.\n";

	return 0;
}
