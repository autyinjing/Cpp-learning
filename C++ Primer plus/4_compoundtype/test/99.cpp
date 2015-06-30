/*
 * =====================================================================================
 *
 *       Filename:  99.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月25日 21时52分18秒
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
	int 	length;
};

int main( int argc, char *argv[] )
{
	CandyBar * candy = new CandyBar[3];

	for ( int i = 0; i < 3; ++i )
	      candy[i] = { "A", (float) (i+1), i+1 };
	for ( int i = 0; i < 3; ++i )
	      cout << candy[i].name << ' '
		      << candy[i].weight << ' '
		      << candy[i].length << endl;

	return 0;
}
