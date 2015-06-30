/*
 * =====================================================================================
 *
 *       Filename:  usett0.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月14日 15时56分52秒
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
	TableTennisPlayer 	player1("Chuck", "Blizzard", true);
	TableTennisPlayer 	player2("Tara", "Boomdea", false);
	player1.Name();
	if ( player1.HasTable() )
	      cout << ": has a table.\n";
	else
	      cout << ": hasn't a table.\n";
	player2.Name();
	if ( player2.HasTable() )
	      cout << ": has a table\n";
	else
	      cout << ": hasn't table.\n";

	return 0;
}
