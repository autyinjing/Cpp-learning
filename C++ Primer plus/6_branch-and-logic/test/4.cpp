// =====================================================================================
// 
//       Filename:  4.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年03月24日 20时31分32秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

const int 	strsize = 20;

typedef struct
{
	char 	fullname[strsize];
	char 	title[strsize];
	char 	bopname[strsize];
	int 	preference;
}Name;

Name  	name[3] = { {"ABC", "abc", "123", 1},
	 	 {"DEF", "def", "456", 2},
		 {"GHI", "ghi", "789", 3}
		};

int main( void )
{
	using namespace std;
	char 	ch;

	cout << "a. display by name 		b. display by title\n"
		"c. display by bopname 		d. display by preference\n"
		"q. quit\n";
	while ( (ch = cin.get()) != 'q' )
	{
		cin.get();
		switch ( ch )
		{
			case 'a': for ( int i = 0; i < 3; i++ )
					cout << name[i].fullname << endl;;
				  break;

			case 'b': for ( int i = 0; i < 3; i++ )
					cout << name[i].title << endl;;
				  break;

			case 'c': for ( int i = 0; i < 3; i++ )
					cout << name[i].bopname << endl;;
				  break;

			case 'd': for ( int i = 0; i < 3; i++ )
					cout << name[i].preference << endl;;
				  break;

		}
	}

	return 0;
}
