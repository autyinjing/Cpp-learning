// =====================================================================================
// 
//       Filename:  2.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 17时20分19秒
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

	long double 	f[101];

	f[0] = f[1] = 1;
	for ( int i = 2; i < 101; i++ )
	      f[i] = i * f[i-1];

	for ( int i = 0; i < 101; i++ )
	      cout << i << "! = " << f[i] << endl;

	return 0;
}

