/*
 * =====================================================================================
 *
 *       Filename:  88.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月27日 18时07分22秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

const char 	* Snames[] = 
{ "Spring", "Summer", "Fall", "Winter" };
const int 	Seasons = 4;

void 	fill( double * );
void 	show( const double * );

int main( int argc, char *argv[] )
{
	double 	expenses[Seasons];
	fill( expenses );
	show( expenses );

	return 0;
}

void fill( double * pa)
{
	using namespace std;
	for ( int i = 0; i < Seasons; ++i )
	{
		cout << "" << Snames[i] << " expenses: ";
		cin >> pa[i];
	}
}

void show( const double * pa )
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for ( int i = 0; i < Seasons; i++ )
	{
		cout << Snames[i] << ": $" << pa[i] << endl;
		total += pa[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
