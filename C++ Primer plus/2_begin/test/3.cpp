// =====================================================================================
// 
//       Filename:  3.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月20日 11时56分37秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

void Print1( int );
void Print2( int );

int main(int argc, char *argv[])
{
	Print1( 1 );
	Print2( 1 );

	return 0;
}

using std::cout;
using std::endl;

void Print1( int n )
{
	if ( n == 1 )
	      Print1( 0 );
	cout << "There blind mice" << endl;
}

void Print2( int n )
{
	if ( n == 1 )
	      Print2( 0 );
	cout << "See how they run" << endl;
}
