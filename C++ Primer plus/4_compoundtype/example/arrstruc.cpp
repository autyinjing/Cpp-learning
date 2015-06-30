// =====================================================================================
// 
//       Filename:  arrstruc.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月21日 20时43分17秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

struct inflatable
{
	char 	name[20];
	float 	volume;
	double 	price;
};

int main( void )
{
	using namespace std;

	inflatable 	guests[2] = 
	{
		{"Bambi", 0.5, 21.99},
		{"Godzilla", 2000, 565.99}
	};

	cout << "The guests " << guests[0].name << " and " << guests[1].name
		<< "\nhave a combined volume of "
		<< guests[0].volume + guests[1].volume << " cubic feet.\n";

	return 0;
}

