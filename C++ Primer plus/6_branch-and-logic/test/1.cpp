// =====================================================================================
// 
//       Filename:  1.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年03月24日 19时46分36秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>
#include <cctype>

int main( void )
{
	using namespace std;
	char 	ch;

	while ( (ch = cin.get()) != '@' )
	{
		cout << ch;
		if ( (ch >= 'A') && (ch <= 'Z') )
		      ch = tolower( ch );
		else if ( (ch >= 'a') && (ch <= 'z') )
		      ch = toupper( ch );
		cout << ch;
	}

	return 0;
}
