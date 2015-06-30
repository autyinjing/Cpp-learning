// =====================================================================================
// 
//       Filename:  textin4.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 16时47分57秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

const int 	EOF = -1;

int main( void )
{
	using namespace std;

	int 	ch;
	int 	count = 0;

	while ( (ch = cin.get()) != EOF )
	{
		cout.put(char(ch));
		++count;
	}
	cout << endl << count << " characters read\n";

	return 0;
}

