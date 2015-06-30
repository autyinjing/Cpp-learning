// =====================================================================================
// 
//       Filename:  enum.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年03月24日 12时11分36秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

enum { red, orange, yellow, green, blue, violet, indigo };

int main( void )
{
	using namespace std;

	cout << "Enter color code (0-6):";
	int 	code;
	cin >> code;
	while ( code >= red && code <= indigo )
	{
		switch ( code )
		{
			case red : cout << "Red.\n";
				   break;

			case orange : cout << "Orange.\n";
				      break;

			case yellow: cout << "Yellow.\n";
				     break;

			case green : cout << "Green.\n";
				     break;

			case blue : cout << "Blue.\n";
				    break;

			case violet : cout << "Violet.\n";
				      break;

			case indigo : cout << "Indigo.\n";
				      break;
		}
		cout << "Enter color code (0-6); ";
		cin >> code;
	}
	cout << "Bye.\n";

	return 0;
}
