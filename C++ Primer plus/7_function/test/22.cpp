/*
 * =====================================================================================
 *
 *       Filename:  22.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月27日 15时30分35秒
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

int 	Input( double [], int );
void 	Print( const double [], int );
double 	Ave( const double [], int );

int main( int argc, char *argv[] )
{
	using namespace std;

	double 	grade[Size], average;
	int 	num;

	num = Input( grade, Size );
	Print( grade, num );
	average = Ave( grade, num );
	cout << "Average = " << average << endl;

	return 0;
}

int Input( double arr[], int size )
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

void Print( const double arr[], int num )
{
	for ( int i = 0; i < num; ++i )
	      std::cout << arr[i] << ' ';
	std::cout << std::endl;
}

double Ave( const double arr[], int num )
{
	double 	sum = 0;

	for ( int i = 0; i < num; ++i )
	      sum += arr[i];
	return sum / num;
}
