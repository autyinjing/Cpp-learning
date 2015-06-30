// =====================================================================================
// 
//       Filename:  address.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 09时20分42秒
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

	int 	donuts = 6;
	double 	cups = 4.5;

	cout << "donuts value = " << donuts;
	cout << " and address = " << &donuts << endl;
	cout << "cups value = " << cups;
	cout << " and address = " << &cups << endl;

	return 0;
}

