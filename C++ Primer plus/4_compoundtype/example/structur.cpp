// =====================================================================================
// 
//       Filename:  structur.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月21日 20时28分50秒
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

	inflatable 	guest = 
	{
		"GFlorious Gloria",
		1.88,
		29.99
	};

	inflatable 	pal = 
	{
		"Audacious Arthur",
		3.12,
		32.99
	};

	cout << "Expand your guest list with " << guest.name;
	cout << " and " << pal.name << "!\n";
	cout << "You can have both for $";
	cout << guest.price + pal.price << ".\n";

	return 0;
}

