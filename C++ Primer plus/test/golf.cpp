/*
 * =====================================================================================
 *
 *       Filename:  golf.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月05日 12时55分24秒
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

void setgolf( golf & g, const char * name, int hc )
{
	int 	i;
	for ( i = 0; name[i]; i++ )
	      g.fullname[i] = name[i];
	g.fullname[i] = '\0';
	g.handicap = hc;
}

int setgolf( golf & g )
{
	using namespace std;

	cout << "name: ";
	(cin.get(g.fullname, Len)).get();
	if ( g.fullname[0] == '\0' )
	      return 0;
	cout << "handicap: ";
	cin >> g.handicap;
	return 1;
}

void handicap( golf & g, int hc )
{
	g.handicap = hc;
}

void showgolf( const golf & g )
{
	using namespace std;

	cout << "fullname: " << g.fullname << endl;
	cout << "handicap: " << g.handicap << endl;
}
