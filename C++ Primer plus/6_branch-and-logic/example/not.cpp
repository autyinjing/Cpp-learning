// =====================================================================================
// 
//       Filename:  not.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年03月22日 22时27分50秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>
#include <climits>

bool is_int( double );

int main( void )
{
	using namespace std;
	double 	num;

	cout << "Yo, dudo!Enter an integer value: ";
	cin >> num;
	while ( !is_int(num) )
	{
		cout << "Out of range -- please try again: ";
		cin >> num;
	}
	int 	val = int (num);
	cout << "You've entered the integer " << val << "\nBye\n";
	return 0;
}

bool is_int( double x )
{
	return ( x <= INT_MAX && x >= INT_MIN );
}
