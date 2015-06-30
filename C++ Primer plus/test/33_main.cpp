/*
 * =====================================================================================
 *
 *       Filename:  function.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月05日 12时48分06秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "golf.h"

int main( void )
{
	using namespace std;
	golf 	g;
	char 	* name = new char [Len];
	int 	hc = 0;
	
	while ( 1 )
	{
		cout << "name: ";
		(cin.get(name, Len)).get();
		if ( name[0] == '\0' )
		      break;
		cout << "handicap: ";
		(cin >> hc).get();
		setgolf(g, name, hc);
		showgolf( g );
	}
	delete [] name;
	cin.get();
	setgolf( g );
	showgolf( g );

	return 0;
}
