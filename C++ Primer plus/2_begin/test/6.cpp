// =====================================================================================
// 
//       Filename:  6.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月20日 12时13分00秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

using namespace std;

double rturn( double lyear )
{
	return ( lyear * 63240 );
}

int main(int argc, char *argv[])
{
	cout << "Enter the number of light years: ";
	
	double 	lyear;
	cin >> lyear;
	cout << lyear << " light years = " << rturn(lyear) << " astronomical units." << endl;

	return 0;
}

