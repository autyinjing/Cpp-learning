// =====================================================================================
// 
//       Filename:  num_test.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 15时11分06秒
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

	cout << "Enter the starting countdown value: ";

	int 	limit;
	int 	i;

	cin >> limit;
	for ( i = limit; i; i-- )
	      cout << "i = " << i << "\n";
	cout << "Done now that i = " << i << "\n";

	return 0;
}

