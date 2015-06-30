// =====================================================================================
// 
//       Filename:  init_ptr.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 09时34分34秒
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

	int 	higgens = 5;
	int 	*pt = &higgens;

	cout << "Value of higgens = " << higgens
		<< "; Address of higgens = " << &higgens << endl;
	cout << "Value of *pt = " << *pt
		<< "; Value of pt = " << pt << endl;

	return 0;
}

