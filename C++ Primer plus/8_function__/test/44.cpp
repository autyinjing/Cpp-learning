/*
 * =====================================================================================
 *
 *       Filename:  44.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月04日 20时49分13秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstring>

struct stringy
{
	char 	* str;
	int 	ct;
};

void 	set( stringy & beany, const char * str );
void 	show( const stringy & beany, int times = 1 );
void 	show( const char * string, int n = 1 );

int main( int argc, char *argv[] )
{
	using namespace std;
	stringy 	beany;
	char 		testing[] = "Reality isn't what it used to be.";

	set( beany, testing );
	show( beany );
	show( beany, 2 );
	testing[0] = 'D';
	testing[1] = 'u';
	show( testing );
	show( testing, 3 );
	show( "Done!" );
	delete [] beany.str;

	return 0;
}

void set( stringy & beany, const char * str )
{
	int 	n = strlen(str);

	beany.str = new char [n];
	for ( int i = 0; str[i]; i++ )
	      beany.str[i] = str[i];
	beany.ct = n;
}

void show( const stringy & beany, int times )
{
	if ( times < 0 )
	      return;
	for ( int i = 0; i < times; i++ )
	      std::cout << "str: " << beany.str << std::endl
		      << "ct: " << beany.ct << std::endl;
}

void show( const char * str, int times )
{
	if ( times < 0 )
	      return;
	for ( int i = 0; i < times; i++ )
	      std::cout << str << std::endl;
}
