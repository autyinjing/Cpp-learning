/*
 * =====================================================================================
 *
 *       Filename:  1010.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月25日 22时02分55秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include <array>

int main( int argc, char *argv[] )
{
	using namespace std;

	array<float, 3> grade;
	float 		average;
	int 		i;

	for ( i = 0; i < 3; ++i )
	{
		cout << "grade" << i+1 << ": ";
		cin >> grade[i];
	}

	average = (grade[0] + grade[1] + grade[2]) / 3;
	cout << "count: " << i << endl;;
	cout << "average: " << average << endl;

	return 0;
}
