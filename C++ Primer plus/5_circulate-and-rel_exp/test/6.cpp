// =====================================================================================
// 
//       Filename:  6.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 17时50分09秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

int main( void )
{
	using namespace std;
	
	const int 	Years = 3, Months = 12;
	int 		sales[Years][Months];
	int 		everyYear[Years];
	int 		sum = 0;

	for ( int i = 0; i < Years; i++ )
	{
		everyYear[i] = 0;
		for ( int j = 0; j < Months; j++ )
		{
			cout << "Enter the sales of " << i + 1 << "st year " << j + 1 << " month:";
			cin >> sales[i][j];
			everyYear[i] += sales[i][j];
		}
	}
	for ( int i = 0; i < 3; i++ )
	      sum += everyYear[i];
	for ( int i = 0; i < 3; i++ )
	      cout << "The sales of " << i + 1 << " year is " << everyYear[i] << endl;
	cout << "The all sales of 3 years is " << sum << endl;;

	return 0;
}

