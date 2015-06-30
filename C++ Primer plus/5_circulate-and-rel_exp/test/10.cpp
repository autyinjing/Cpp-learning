// =====================================================================================
// 
//       Filename:  10.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 19时39分09秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

using namespace std;

void Print( void )
{
	int 	num;

	cout << "Enter the num: ";
	cin >> num;

	for ( int i = 1; i <= num; i++ )
	{
		for ( int j = 1; j <= num - i; j++ )
		      cout << '.';
		for ( int k = 1; k <= i; k++ )
		      cout << '*';
		cout << endl;
	}
}

int main( void )
{
	Print();

	return 0;
}

