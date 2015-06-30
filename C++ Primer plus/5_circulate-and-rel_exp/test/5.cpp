// =====================================================================================
// 
//       Filename:  5.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 17时39分52秒
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

	const int 	MonSize = 12;
	int 		sale_count[MonSize];
	int 		sum = 0;

	for ( int i = 0; i < MonSize; i++ )
	{
		cout << "Enter the salecount of " << i + 1 << ": " ;
		cin >> sale_count[i];
		sum += sale_count[i];
	}
	cout << "The hole year salecount = " << sum << endl;

	return 0;
}

