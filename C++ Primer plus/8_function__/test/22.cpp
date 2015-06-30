/*
 * =====================================================================================
 *
 *       Filename:  22.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月04日 20时14分44秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

struct CandyBar
{
	char  	* name;
	double 	weight;
	int 	hot;
};

void set_bar( CandyBar & c, char * name = "Millennium Munch", double weight = 2.85, int hot = 350 );
void print_bar( const CandyBar & c );

int main( int argc, char *argv[] )
{
	using namespace std;
	CandyBar 	c;

	set_bar( c );
	print_bar( c );

	return 0;
}

void set_bar( CandyBar & c, char * name, double weight, int hot )
{
	c.name = name;
	c.weight = weight;
	c.hot = hot;
}

void print_bar( const CandyBar & c )
{
	using namespace std;
	cout << "name: " << c.name << endl;
	cout << "weight: " << c.weight << endl;
	cout << "hot: " << c.hot << endl;
}
