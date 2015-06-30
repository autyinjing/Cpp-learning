// =====================================================================================
// 
//       Filename:  7.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月21日 12时27分05秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

int main(int argc, char *argv[])
{
	using namespace std;

	int 		mpg;
	const double 	G_Y = 62.14;
	const double 	J_S = 3.875;

	cout << "Enter the oil: ";
	cin >> mpg;

	cout << "The URP style is " << mpg << "/100km\n";
	cout << "The USA style is " << G_Y / (double (mpg) / J_S) << "l/calun\n";

	return 0;
}

