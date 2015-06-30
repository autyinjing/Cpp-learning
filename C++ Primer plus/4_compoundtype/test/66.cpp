/*
 * =====================================================================================
 *
 *       Filename:  66.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月25日 21时26分29秒
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

int main( int argc, char *argv[] )
{
	using namespace std;

	struct CandyBar
	{
		string 	name;
		float 	weight;
		int 	net;
	};

	CandyBar candy[3] = 
	{
		{ "A", 10.1, 11 },
		{ "B", 12.1, 13 },
		{ "C", 14.1, 15 }
	};

	for ( int i = 0; i < 3; ++i )
	      cout << candy[i].name << " "
		      << candy[i].weight << " "
		      << candy[i].net << endl;

	return 0;
}
