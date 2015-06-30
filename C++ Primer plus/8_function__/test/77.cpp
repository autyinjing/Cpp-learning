/*
 * =====================================================================================
 *
 *       Filename:  77.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月04日 21时54分36秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

template <typename T>
T SumArray( T arr[], int n );

template <class T>
T SumArray( T *arr[], int n );

struct debts
{
	char 	name[50];
	double 	amount;
};

int main( int argc, char *argv[] )
{
	using namespace std;
	int 	things[6] = { 13, 31, 103, 301, 310, 130 };
	struct debts mr_E[3] = 
	{
		{ "Ima Wolfe", 2400.0 },
		{ "Ura Foxe", 1300.0 },
		{ "Iby Stout", 1800.0 }
	};
	double 	* pd[3];

	for ( int i = 0; i < 3; i++ )
	      pd[i] = &mr_E[i].amount;
	cout << "Sum of the things = " << SumArray(things, 6) << endl;
	cout << "Sum of pd = " << SumArray(pd, 3) << endl;

	return 0;
}

template <typename T>
T SumArray( T arr[], int n )
{
	using namespace std;
	T 	sum = 0;
	for ( int i = 0; i < n; i++ )
	      sum += arr[i];
	return sum;
}

template <class T>
T SumArray( T * arr[], int n )
{
	using namespace std;
	T 	sum = 0;
	for ( int i = 0; i < n; i++ )
	      sum += *arr[i];
	return sum;
}
