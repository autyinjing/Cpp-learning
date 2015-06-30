// =====================================================================================
// 
//       Filename:  10.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 14时43分26秒
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

	int 	ai[3];
	int 	i;

	for ( i = 0; i < 3; i++ )
	      (cin >> ai[i]).get();

	for ( i = 0; i < 3; i++ )
	      cout << ai[i] << endl;

	return 0;
}

