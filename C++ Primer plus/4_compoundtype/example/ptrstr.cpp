// =====================================================================================
// 
//       Filename:  ptrstr.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 10时36分07秒
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

	char 		animal[20] = "bear";
	const char 	*bird = "wren";
	char 		*ps;

	cout << animal << " and ";
	cout << bird << "\n";
	cout << "Enter a kind of animal: ";
	cin >> animal;

	ps = animal;
	cout << ps << "!\n";
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *) ps << endl;
	ps = new char [strlen(animal) + 1];
	strcpy(ps, animal);
	cout << "After using strcpy():\n";
	cout << animal << " at " << (int *) animal << endl;
	cout << ps << " at " << (int *) ps << endl;
	delete [] ps;

	return 0;
}

