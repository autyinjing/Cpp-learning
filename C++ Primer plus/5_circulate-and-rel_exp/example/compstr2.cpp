// =====================================================================================
// 
//       Filename:  compstr2.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 15时58分24秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>
#include <string>

int main( void )
{
	using namespace std;
	string 	word = "?ate";

	for ( char ch = 'a'; word != "mate"; ch++ )
	{
		cout << word << endl;
		word[0] = ch;
	}
	cout << "After loop ends, word is " << word << endl;

	return 0;
}

