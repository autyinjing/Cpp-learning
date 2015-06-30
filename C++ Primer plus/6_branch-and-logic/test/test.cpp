// =====================================================================================
// 
//       Filename:  test.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年03月24日 18时59分54秒
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
	int 	ct1, ct2;

	ct1 = ct2 = 0;
	while ( (ch = cin.get()) != '$' )
	{
		cout << ch;
		ct1++;
		if ( ch = '$' )
		      ct2++;
		cout << ch;
	}
	cout << "ct1 = " << ct1 << ", ct2 = " << ct2 << "\n";

	return 0;
}

