// =====================================================================================
// 
//       Filename:  bigstep.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 15时25分08秒
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

	cout << "Enter an integer: ";
	int 	by;
	cin >> by;
	cout << "Counting by " << by << "S:\n";
	for ( int i = 0; i < 100; i = i + by )
	      cout << i << endl;

	return 0;
}

