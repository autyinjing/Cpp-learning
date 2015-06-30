// =====================================================================================
// 
//       Filename:  6.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 12时32分28秒
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

	CandyBar 	snack[3] = {
					{"AA  ", 11.1, 250},
					{"BB  ", 22.2, 350},
					{"CC", 33.3, 450}
				   };

	cout << "logo: " << snack[0].logo << snack[1].logo << snack[2].logo << endl;
	cout << "weight: " << snack[0].weight << "  " << snack[1].weight << "  " << snack[2].weight << endl;
	cout << "cluli: " << snack[0].cluli << "  " << snack[1].cluli << "  " << snack[2].cluli << endl;

	return 0;
}

