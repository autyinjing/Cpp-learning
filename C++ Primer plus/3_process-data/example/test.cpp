// =====================================================================================
// 
//       Filename:  test.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月20日 16时30分16秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>
#include <stdio.h>

int main(int argc, char *argv[])
{
	using namespace std;

	/*int 	wrens(432);
	int 	hamburgers = {24};
	int 	emus{7};
	int 	rocs = {};
	int 	psychics{};

	cout << wrens << endl;
	cout << hamburgers << endl;
	cout << emus << endl;
	cout << rocs << endl;
	cout << psychics << endl;
	
	//cout << endl;
	//cout << '\n';
	//cout << "\n";
	
	wchar_t 	bob = L'A';
	cout << bob << endl;*/
	
	char16_t 	ch1 = u'q';
	char32_t 	ch2 = U'\U0000222B';

	cout << ch1 << endl;
	cout << ch2 << endl;
	
	//bool 	start = -100;
	//bool 	stop = 0;

	//cout << start << '\n' << stop << endl;
	
	/*const int 	Study = 22;

	cout << Study << endl;

	double 		a = 3.1415926e+10;
	double 		b = 314159e-8;

	cout << a << endl << b << endl;
	printf("%f\n%f\n", a, b);*/

	return 0;
}

