// =====================================================================================
// 
//       Filename:  while.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 16时00分45秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

const int 	ArSize = 20;

int main( void )
{
	using namespace std;

	char 	name[ArSize];

	cout << "Your first name, please: ";
	cin >> name;
	cout << "Gere is your name, verticalized and ASCIIized:\n";

	int 	i = 0;
	while ( name[i] != '\0' )
	{
		cout << name[i] << ": " << int(name[i]) << endl;
		i++;
	}

	return 0;
}

