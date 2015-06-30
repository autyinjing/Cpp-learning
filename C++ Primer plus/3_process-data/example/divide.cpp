// =====================================================================================
// 
//       Filename:  divide.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月21日 10时11分12秒
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
	cout << "Integer division: 9/5 = " << 9 / 5 << endl;
	cout << "Floating-point division: 9.0 / 5.0 = ";
	cout << 9.0 / 5.0 << endl;
	cout << "Mixed division: 9.0 / 5 = " << 9.0 / 5 << endl;
	cout << "double constants: 1e7 / 9.0 = ";
	cout << 1.e7 / 9.0 << endl;
	cout << "float constants: 1e7f / 9.0f = ";
	cout << 1.e7f / 9.0f << endl;

	return 0;
}

