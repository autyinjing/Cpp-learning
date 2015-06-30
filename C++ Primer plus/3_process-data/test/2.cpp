// =====================================================================================
// 
//       Filename:  2.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月21日 11时32分46秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>
#include <cmath>

int main(int argc, char *argv[])
{
	using namespace std;

	double 		chi, cun;
	double 		weight;
	const int 	ChiCun = 12;
	const double 	CunMi = 0.0254;
	const double 	QianBang = 1 / 2.2;

	cout << "Enter your chi: ";
	cin >> chi;
	cout << "Enter your cun: ";
	cin >> cun;
	cout << "Enter your weight: ";
	cin >> weight;

	cout << "Your BMI = " << (weight * QianBang) / pow(chi * ChiCun * CunMi, 2) << endl;

	return 0;
}
