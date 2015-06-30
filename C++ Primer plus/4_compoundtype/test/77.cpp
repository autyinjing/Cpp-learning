/*
 * =====================================================================================
 *
 *       Filename:  77.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月25日 21时32分37秒
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

void Input( Pizza * pizza )
{
	cout << "name: ";
	getline(cin, pizza->name);
	cout << "length: ";
	cin >> pizza->length;
	cout << "weight: ";
	cin >> pizza->weight;
}

void Output( Pizza pizza )
{
	cout << "name: " << pizza.name << endl;
	cout << "length: " << pizza.length << endl;
	cout << "weight: " << pizza.weight << endl;
}

int main( int argc, char *argv[] )
{
	Pizza 	pizza;

	Input(&pizza);
	Output(pizza);

	return 0;
}
