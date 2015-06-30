/*
 * =====================================================================================
 *
 *       Filename:  55.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月25日 21时20分08秒
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

struct CandyBar
{
	string 	name;
	float 	weight;
	int 	net;
}snack = 
{
	"Mocha Munch",
	2.3,
	350
};

int main( int argc, char *argv[] )
{
	cout << snack.name << endl;
	cout << snack.weight << endl;
	cout << snack.net << endl;

	return 0;
}
