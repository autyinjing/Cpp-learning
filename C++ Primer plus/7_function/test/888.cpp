/*
 * =====================================================================================
 *
 *       Filename:  888.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月27日 18时18分39秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

const int 	Seasons = 4;
const char 	* Snames[] = 
{ "Spring", "Summer", "Fall", "Winter" };

struct money
{
	double 	arr[Seasons];
};

void 	fill( money * );
void 	show( money );

int main( int argc, char *argv[] )
{
	money 	str;
	fill( &str );
	show( str );

	return 0;
}

void fill( money * str )
{
	using namespace std;
	for ( int i = 0; i < Seasons; i++ )
	{
		cout << "Enter " << Snames[i] << " expenses: ";
		cin >> str->arr[i];
	}
}

void show( money str )
{
	using namespace std;
	double 	total = 0.0;
	cout << "\nEXPENSES\n";
	for ( int i = 0; i < Seasons; i++ )
	{
		cout << Snames[i] << ": $" << str.arr[i] << endl;
		total += str.arr[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
