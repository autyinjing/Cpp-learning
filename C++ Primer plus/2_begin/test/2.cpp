// =====================================================================================
// 
//       Filename:  2.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月20日 11时51分00秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

int Trans( int lng )
{
	return ( 220 * lng );
}

int main(int argc, char *argv[])
{
	using namespace std;

	int 	lng;
	cout << "Input lng: ";
	cin >> lng;
	cout << lng << " lng == " << Trans( lng ) << " ma" << endl;

	return 0;
}

