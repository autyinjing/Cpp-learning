// =====================================================================================
// 
//       Filename:  cctypes.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年03月22日 22时45分56秒
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
	cout << "Enter text for analysis @ and type to terminate input.\n";
	char 	ch;

	int 	whitespace = 0;
	int 	digits = 0;
	int  	chars = 0;
	int 	punct = 0;
	int 	others = 0;

	cin.get( ch );
	while ( ch != '@' )
	{
		if ( isalpha( ch ) )
		      chars++;
		else if ( isspace( ch ) )
		      whitespace++;
		else if ( isdigit( ch ) )
		      digits++;
		else if ( ispunct( ch ) )
		      punct++;
		else
		      others++;
		cin.get( ch );
	}
	cout << chars << " letters, "
		<< whitespace << " whitespace, "
		<< digits << " digits, "
		<< punct << " punctuations, "
		<< others << " others.\n";

	return 0;
}
