/*
 * =====================================================================================
 *
 *       Filename:  88.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月25日 21时42分48秒
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

struct Pizza
{
	string 	name;
	int 	length;
	float 	weight;
};

Pizza * Input( void )
{
	Pizza 	*temp = new Pizza;

	cout << "length: ";
	(cin >> temp->length).get();
	cout << "name: ";
	getline(cin, temp->name);
	cout << "weight: ";
	cin >> temp->weight;

	return temp;
}

void Output( Pizza * pizza )
{
	cout << "name: " << pizza->name << endl;
	cout << "" << pizza->length << endl;
	cout << "" << pizza->weight << endl;

	delete pizza;
}

int main( int argc, char *argv[] )
{
	Pizza 	* pizza;

	pizza = Input();
	Output(pizza);

	return 0;
}
