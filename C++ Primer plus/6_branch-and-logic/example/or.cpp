// =====================================================================================
// 
//       Filename:  or.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年03月05日 13时20分43秒
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

	cout << "This program may reformat your hard disk\n"
		<< "and destroy all your data.\n"
		<< "Do you wish to continue?<y/n> ";
	char 	ch;
	cin >> ch;
	if ( (ch == 'y') || (ch == 'Y') )
	      cout << "You were warned!\a\a\n";
	else if ( (ch == 'n') || (ch == 'N') )
	      cout << "A wise choice...bye\n";
	else
	      cout << "That wasn't a y or n! Apparently you "
		      << "can't follow\ninstructions, so "
		      << "I'll trash your disk anyway.\a\a\a\n";

	return 0;
}

