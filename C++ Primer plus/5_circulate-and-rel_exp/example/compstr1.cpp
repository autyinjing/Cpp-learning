// =====================================================================================
// 
//       Filename:  compstr1.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 15时55分02秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>
#include <cstring>

int main( void )
{
	using namespace std;

	char 	word[5] = "?ate";

	for ( char ch = 'a'; strcmp(word, "mate"); ch++ )
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;

	return 0;
}

