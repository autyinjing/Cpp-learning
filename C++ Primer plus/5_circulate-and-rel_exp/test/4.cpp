// =====================================================================================
// 
//       Filename:  4.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 17时31分19秒
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

	float 	Daphne = 100;
	float 	Cleo = 100;
	int 	i;

	for ( i = 0; Daphne >= Cleo; i++ )
	{
		Daphne += 100 * 0.10;
		Cleo = Cleo + Cleo * 0.05;
	}
	cout << i << " years later, Cleo overed Daphne!\n";
	cout << "Daphne = " << Daphne << endl;
	cout << "Cleo = " << Cleo << endl;

	return 0;
}

