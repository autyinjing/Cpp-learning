// =====================================================================================
// 
//       Filename:  forstr2.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 15时45分19秒
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

	char 	temp;
	int 	i, j;
	for ( j = 0, i = word.size() - 1; j < i; --i, ++j)
	{
		temp = word[i];
		word[i] = word[j];
		word[j] = temp;
	}
	cout << word << "\nDone\n";

	return 0;
}

