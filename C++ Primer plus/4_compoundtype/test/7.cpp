// =====================================================================================
// 
//       Filename:  7.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 14时05分37秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>
#include <string>

using namespace std;

struct Pizza
{
	string 	company;
	int 	diameter;
	float 	weight;
};

void Input( Pizza *pizza )
{
	if ( pizza == NULL )
	      return;

	cout << "Enter the company: ";
	getline(cin, pizza->company);
	cout << "Enter the diameter: ";
	(cin >> pizza->diameter).get();
	cout << "Enter the weight: ";
	(cin >> pizza->weight).get();
}

void Output( Pizza pizza )
{
	cout << "company  diameter  weight\n";
	cout << pizza.company << "  " << pizza.diameter << "  " << pizza.weight << endl;
}

int main( void )
{
	Pizza 	pizza;

	Input( &pizza );
	Output( pizza );

	return 0;
}

