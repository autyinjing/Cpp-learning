// =====================================================================================
// 
//       Filename:  8.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 19时23分58秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>
#include <cstring>

using namespace std;

void Statis( void )
{
	char 	str[20][20];
	int 	count = 0;
	
	cout << "Enter the word: ";
	cin >> str[0];
	for ( int i = 1; strcmp("done", str[i-1]); i++ )
	{
		cin >> str[i];
		count++;
	}

	cout << "You entered total " << count << " words\n";
}

int main( void )
{
	Statis();

	return 0;
}

