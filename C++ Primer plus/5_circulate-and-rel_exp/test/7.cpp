// =====================================================================================
// 
//       Filename:  7.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 19时11分02秒
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
int 		count;

struct Car
{
	string 	company;
	int 	year;
};

Car *Create( void )
{
	cout << "Enter the count of car: ";
	(cin >> count).get();

	Car 	*car = new Car [count];

	for ( int i = 0; i < count; i++ )
	{
		cout << "Enter the company: ";
		getline(cin, car[i].company);
		cout << "Enter the year: ";
		(cin >> car[i].year).get();
	}

	return car;
}

void Print( Car *car )
{
	if ( car == NULL )
	      return ;

	for ( int i = 0; i < count; i++ )
	      cout << "company: " << car[i].company << " 	year: " << car[i].year << endl;
}

int main( void )
{
	Car 	*car = Create();

	Print( car );

	return 0;
}

