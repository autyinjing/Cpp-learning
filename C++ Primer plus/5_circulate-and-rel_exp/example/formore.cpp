// =====================================================================================
// 
//       Filename:  formore.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 15时20分17秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

const int ArSize = 16;

int main( void )
{
	using namespace std;

	long long factorials[ArSize];
	
	factorials[1] = factorials[0] = 1LL;
	for ( int i = 2; i < ArSize; i++ )
	      factorials[i] = i * factorials[i - 1];
	for ( int i = 0; i < ArSize; i++ )
	      cout << i << "! = " << factorials[i] << endl;

	return 0;
}

