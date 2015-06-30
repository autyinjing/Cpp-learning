// =====================================================================================
// 
//       Filename:  5.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月20日 12时06分19秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

using namespace std;

double rturn( double celsius )
{
	return ( 1.8 * celsius + 32.0 );
}

int main(int argc, char *argv[])
{
	double 	celsius;

	cout << "Please enter a Celsius value: ";
	cin >> celsius;
	cout << celsius 
		<< " degrees Celsius is " 
		<< rturn( celsius ) 
		<< " degrees Fahrenheit." << endl;

	return 0;
}

