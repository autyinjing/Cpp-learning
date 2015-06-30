// =====================================================================================
// 
//       Filename:  strings.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月21日 18时48分26秒
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

	const int 	Size = 15;
	char 		name1[Size];
	char 		name2[Size] = "C++owboy";

	cout << "Howdy! I'm " << name2;
	cout << "! what's your name ?\n";
	cin >> name1;
	cout << "Well, " << name1 << endl;
	cout << strlen(name1) << " letters and is stored\n";
	cout << "in an array of " << sizeof (name1) << " bytes.\n";
	cout << "Your initial is " << name1[0] << endl;
	name2[3] = '\0';
	cout << "Here are the first 3 characters of my name: ";
	cout << name2 << endl;

	return 0;
}
