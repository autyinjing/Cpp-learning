// =====================================================================================
// 
//       Filename:  1.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 17时16分31秒
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

	int 	a, b, sum = 0;

	cout << "Enter the a: ";
	(cin >> a).get();
	cout << "Enter the b: ";
	(cin >> b).get();

	for ( int i = a; i <= b; i++ )
	      sum += i;
	cout << "The sum = " << sum << endl;

	return 0;
}

