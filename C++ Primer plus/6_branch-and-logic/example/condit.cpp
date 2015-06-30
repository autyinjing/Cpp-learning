// =====================================================================================
// 
//       Filename:  condit.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年03月22日 22时57分56秒
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
	int 		a, b;
	cout << "Enter two integers: ";
	cin >> a >> b;
	cout << "The larger of " << a << " and " << b;
	cout << " is " << (a > b ? a : b) << endl;

	return 0;
}

