// =====================================================================================
// 
//       Filename:  5.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年03月24日 20时46分32秒
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
	int 		income;
	double 		tax = 0;

	cout << "Enter the income: ";
	while ( cin >> income )
	{
		if ( income < 0 )
		      break;
		if ( income <= 5000 )
		      tax = 0.0;
		else if ( (income >= 5001) && (income <= 15000) )
		      tax = (income - 5000) * 0.10;
		else if ( (income >= 15001) && (income <= 35000) )
		      tax = (income - 15000) * 0.15 + 10000 * 0.10;
		else if ( income > 35000 )
		      tax = (income - 35000) * 0.20 + 20000 * 0.15 + 10000 * 0.10;
		cout << "The tax = " << tax << endl;
		cout << "Enter the income: ";
	}
			      
	return 0;
}
