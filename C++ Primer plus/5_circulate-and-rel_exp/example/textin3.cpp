// =====================================================================================
// 
//       Filename:  textin3.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 16时38分00秒
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
	int 	count = 0;
	cin.get(ch);
	while ( cin.fail() == false )
	{
		cout << ch;
		++count;
		cin.get(ch);
	}
	cout << endl << count << " characters read\n";

	return 0;
}
