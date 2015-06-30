/*
 * =====================================================================================
 *
 *       Filename:  usett1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月14日 16时57分21秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "tabtenn0.h"

int main( int argc, char *argv[] )
{
	using std::cout;
	using std::endl;
	TableTennisPlayer 	player1("Tara", "Boomdea", false);
	RatedPlayer 		rplayer1(1140, "Mallory", "Duck", true);
	rplayer1.Name();
	if ( rplayer1.HasTable() )
	      cout << ": has a table.\n";
	else
	      cout << ": has't a table.\n";
	player1.Name();
	if ( player1.HasTable() )
	      cout << "has a table";
	else
	      cout << ": hasn't a table.\n";
	cout << "Name: ";
	rplayer1.Name();
	cout << "; Rating: " << rplayer1.Rating() << endl;
	RatedPlayer 	rplayer2(1212, player1);
	cout << "Name: ";
	rplayer2.Name();
	cout << "; Rating: " << rplayer2.Rating() << endl;

	return 0;
}
