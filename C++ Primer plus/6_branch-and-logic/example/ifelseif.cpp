// =====================================================================================
// 
//       Filename:  ifelseif.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年03月05日 13时15分28秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

const int 	Fave = 27;

int main( void )
{
	using namespace std;

	int 	n;

	cout << "Enter a number in the range 1-100 to find ";
	cout << "my favorite number: ";
	do 
	{
		cin >> n;
		if ( n < Fave )
		      cout << "Too low -- guess again: ";
		else if ( n > Fave )
		      cout << "Too high -- guess again: ";
		else
		      cout << Fave << " is right!\n";
	}while ( n != Fave );

	return 0;
}

