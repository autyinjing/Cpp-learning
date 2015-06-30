// =====================================================================================
// 
//       Filename:  dowhile.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 16时17分39秒
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

	int 	n;

	cout << "Enter numbers in the range 1-10 to find ";
	cout << "my favorite number\n";
	do
	{
		cin >> n;
	}while ( n != 7 );
	cout << "Yes, 7 is my favorite.\n";

	return 0;
}

