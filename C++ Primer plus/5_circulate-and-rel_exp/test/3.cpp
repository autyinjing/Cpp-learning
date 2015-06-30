// =====================================================================================
// 
//       Filename:  3.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 17时24分43秒
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

	int 	num, sum = 0;

	cout << "Enter the num: ";
	cin >> num;
	while ( num != 0 )
	{
		sum += num;
		cout << sum << endl;
		cin >> num;
	}

	return 0;
}

