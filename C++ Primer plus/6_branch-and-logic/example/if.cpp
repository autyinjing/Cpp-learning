// =====================================================================================
// 
//       Filename:  if.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 19时45分44秒
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
	int 	spaces = 0;
	int 	total = 0;

	cin.get(ch);
	while ( ch != '.' )
	{
		if ( ch == ' ' )
		      ++spaces;
		++total;
		cin.get(ch);
	}
	cout << spaces << " spaces, " << total;
	cout << " characters total in sentence\n";

	return 0;
}

