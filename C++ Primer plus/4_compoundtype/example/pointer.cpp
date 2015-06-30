// =====================================================================================
// 
//       Filename:  pointer.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 09时27分28秒
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

	int 	updates = 6;
	int 	*p_updates;

	p_updates = &updates;

	cout << "Values: updates = " << updates;
	cout << ", *p_updates = " << *p_updates << endl;
	
	cout << "Address: &updates = " << &updates;
	cout << ", p_updates = " << p_updates << endl;

	*p_updates = *p_updates + 1;
	cout << "Now updates = " << updates << endl;

	return 0;
}

