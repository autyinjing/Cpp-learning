// =====================================================================================
// 
//       Filename:  modulus.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月21日 10时20分18秒
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

	const int 	Lbs_per_stn = 14;
	int 		lbs;

	cout << "Enter your weight in pounds: ";
	cin >> lbs;
	
	int 		stone = lbs / Lbs_per_stn;
	int 		pounds = lbs % Lbs_per_stn;

	cout << lbs << "pounds are " << stone
		<< " stone," << pounds << " pound(s).\n";

	return 0;
}

