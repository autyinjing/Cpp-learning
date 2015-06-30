// =====================================================================================
// 
//       Filename:  3.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年03月24日 20时21分55秒
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
	char 	ch;

	cout << "Please enter one of the following choices:\n"
		"c) carnivore  			p) pianist\n"
		"t) tree 			g) game\n";
	while ( (ch = cin.get()) != 'q' )
	{
		cin.get();
		switch ( ch )
		{
			case 'c': cout << "Carnivore\n";
				  break;

			case 'p': cout << "Pianist\n";
				  break;

			case 't': cout << "A maple is a tree\n";
				  break;

			case 'g': cout << "Game\n";
				  break;

			default: cout << "Please enter a c, p, t, or g: ";
		}
	}

	return 0;
}
