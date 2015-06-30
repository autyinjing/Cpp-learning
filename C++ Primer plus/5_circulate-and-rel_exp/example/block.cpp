// =====================================================================================
// 
//       Filename:  block.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 15时36分36秒
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

	cout << "The Amazing Accounto will sum and average ";
	cout << "five number for you.\n";
	cout << "Please enter five values:\n";
	double 	number;
	double 	sum = 0.0;
	for ( int i = 1; i <= 5; i++ )
	{
		cout << "Value " << i << ": ";
		cin >> number;
		sum += number;
	}
	cout << "Five exquisite choices indeed! ";
	cout << "They sum to " << sum << endl;
	cout << "and average to " << sum / 5 << "\n";
	cout << "The Amazing Accounto bids you adieu!\n";

	return 0;
}

