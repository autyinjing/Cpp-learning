// =====================================================================================
// 
//       Filename:  floatnum.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月21日 09时45分46秒
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

	cout.setf(ios_base::fixed, ios_base::floatfield);
	float 		tub = 10.0 / 3.0;
	double 		mint = 10.0 / 3.0;
	const float 	million = 1.0e6;

	cout << "tub = " << tub;
	cout << ", a million tubs = " << million * tub;
	cout << ",\nand ten million tubs = ";
	cout << 10 * million * tub << endl;

	cout << "mint = " << mint << " and a million mints = ";
	cout << million * mint << endl;

	return 0;
}

