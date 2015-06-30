// =====================================================================================
// 
//       Filename:  ?:.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年03月22日 23时05分17秒
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
	const char  	x[2][20] = { "Jason ", "at your service\n" };
	const char 	*y = "Quillstone ";

	for ( int i = 0; i < 3; i++ )
	      cout << ( (i < 2) ? !i ? x[i] : y : x[1] );

	return 0;
}

