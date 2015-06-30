// =====================================================================================
// 
//       Filename:  forstr1.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 15时27分20秒
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

	cout << "Enter a word: ";
	string 	word;
	cin >> word;

	for ( int i = word.size() - 1; i >= 0; i-- )
	      cout << word[i];
	cout << "\nBye.\n";

	return 0;
}

