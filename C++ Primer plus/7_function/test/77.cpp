/*
 * =====================================================================================
 *
 *       Filename:  77.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月27日 17时35分50秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

const int 	Max = 5;

double 	* fill_array( double *, int limit );
void 	show_array( const double *, const double * );
void 	revalue( double, double *, double * );

int main( int argc, char *argv[] )
{
	using namespace std;
	double 	properties[Max];

	double * tail = fill_array(properties, Max);
	show_array(properties, tail);
	if ( tail != properties )
	{
		cout << "Enter revaluation factor: ";
		double 	factor;
		while ( !(cin >> factor) )
		{
			cin.clear();
			while ( cin.get() != '\n' )
			      continue;
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, properties, tail);
		show_array(properties, tail);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();

	return 0;
}

double * fill_array( double * ar, int limit )
{
	using namespace std;
	double 	temp;
	double 	*tail = ar;

	for ( int i = 0; i < limit; ++i )
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if ( !cin )
		{
			cin.clear();
			while ( cin.get() != '\n' )
			      continue;
			cout << "Bad input; input process terminated.\n";
			break;
		}
		else if ( temp < 0 )
		      break;
		ar[i] = temp;
		tail++;
	}
	return --tail;
}

void show_array( const double * ar, const double * tail )
{
	using namespace std;
	
	int 	i = 0;
	for ( const double * p = ar; p != tail+1; p++, i++ )
	{
		cout << "Property #" << (i + 1) << ": $";
		cout << *p << endl;
	}
}

void revalue( double r, double * ar, double * tail )
{
	for ( double * p = ar; p != tail + 1; p++ )
	      *p *= r;
}
