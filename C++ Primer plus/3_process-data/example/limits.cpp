// =====================================================================================
// 
//       Filename:  limits.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月20日 16时13分04秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>
#include <climits>

int main(int argc, char *argv[])
{
	using namespace std;

	int 		n_int = INT_MAX;
	short 		n_short = SHRT_MAX;
	long 		n_long = LONG_MAX;
	long long 	n_llong = LLONG_MAX;

	cout << "int is " << sizeof n_int << " bytes." << endl;
	cout << "short is " << sizeof n_short << " bytes." << endl;
	cout << "long is " << sizeof n_long << " bytes." << endl;
	cout << "long long is " << sizeof n_llong << " bytes." << endl;
	cout << endl;

	cout << "Maximum values: " << endl;
	cout << "int: " << n_int << endl;
	cout << "short: " << n_short << endl;
	cout << "long: " << n_long << endl;
	cout << "long long: " << n_llong << endl << endl;

	cout << "Minimum int valus = " << INT_MIN << endl;
	cout << "Bits per byte = " << CHAR_BIT << endl;

	return 0;
}

