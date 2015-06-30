/*
 * =====================================================================================
 *
 *       Filename:  66.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月27日 16时51分04秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

const int 	Size = 10;

int 	Fill_array( double [], int );
void 	Show_array( const double [], int );
void 	Reverse_array( double [], int );

int main( int argc, char *argv[] )
{
	using namespace std;

	double 	arr[Size];
	int 	count;

	count = Fill_array( arr, Size );
	Show_array( arr, count );
	Reverse_array( arr+1, count-2 );
	Show_array( arr, count );

	return 0;
}

int Fill_array( double arr[], int size )
{
	using namespace std;

	int 	i;
	for ( i = 0; i < size; ++i )
	{
		cin >> arr[i];
		if ( arr[i] < 0.0 )
		      break;
	}
	return i;
}

void Show_array( const double arr[], int count )
{
	using namespace std;
	for ( int i = 0; i < count; ++i )
	      cout << arr[i] << ' ';
	cout << endl;
}

void Reverse_array( double arr[], int count )
{
	using namespace std;
	double 		temp;

	count--;
	for ( int i = 0; i < count; ++i, --count )
	{
		temp = arr[i];
		arr[i] = arr[count];
		arr[count] = temp;
	}
}
