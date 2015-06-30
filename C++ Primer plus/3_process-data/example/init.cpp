// =====================================================================================
// 
//       Filename:  init.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月21日 10时28分00秒
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

	float 	tree = 3;
	int 	guess{3.9832};
	int 	debt = 7.2e12;

	cout << "tree = " << tree << endl;
	cout << "guess = " << guess << endl;
	cout << "debt = " << debt << endl;

	return 0;
}

