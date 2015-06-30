/*
 * =====================================================================================
 *
 *       Filename:  77.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月26日 11时03分47秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>

using namespace std;

struct Car
{
	string 	name;
	int 	year;
};

int main( int argc, char *argv[] )
{
	int 	num;

	cout << "How many cars? ";
	(cin >> num).get();

	Car * 	car = new Car [num];

	for ( int i = 0; i < num; ++i )
	{
		cout << "name" << i+1 << ": ";
		getline(cin, car[i].name);
		cout << "year: ";
		(cin >> car[i].year).get();
	}
	for ( int i = 0; i < num; ++i )
	{
		cout << "car" << i+1 << endl;
		cout << "name: " << car[i].name << endl;
		cout << "year: " << car[i].year << endl;
	}

	return 0;
}
