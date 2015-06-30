// =====================================================================================
// 
//       Filename:  5.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 12时28分03秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

struct CandyBar
{
	char 	logo[20];
	float 	weight;
	int 	cluli;
};

int main( void )
{
	using namespace std;

	CandyBar 	snack = {"Mocha Munch", 2.3, 350};

	cout << "logo: " << snack.logo << endl;
	cout << "weight: " << snack.weight << endl;
	cout << "cluli: " << snack.cluli << endl;

	return 0;
}

