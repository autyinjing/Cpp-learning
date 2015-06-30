// =====================================================================================
// 
//       Filename:  4.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月20日 12时02分05秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

using namespace std;
void Age( void );

int main(int argc, char *argv[])
{
	Age();

	return 0;
}

void Age( void )
{
	cout << "Please input you age: ";

	int 	age;
	cin >> age;
	cout << age << " years include " << (12 * age) << " months." << endl;
}
