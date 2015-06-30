// =====================================================================================
// 
//       Filename:  newstrct.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 10时49分27秒
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

	inflatable 	*ps = new inflatable;
	cout << "Enter name of inflatable item: ";
	cin.get(ps->name, 20);
	cout << "Enter volume in cubic feet: ";
	cin >> (*ps).volume;
	cout << "Enter price: $";
	cin >> ps->price;
	cout << "Name: " << (*ps).name << endl;
	cout << "Volume: " << ps->volume << " cubic feet\n";
	cout << "Price: $" << ps->price << endl;

	delete ps;

	return 0;
}

