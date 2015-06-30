// =====================================================================================
// 
//       Filename:  addpntrs.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 10时10分22秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

int main( void )
{
	using namespace std;

	double 	wages[3] = {10000.0, 20000.0, 30000.0};
	short 	stacks[3] = {3, 2, 1};

	double 	*pw = wages;
	short 	*ps = &stacks[0];

	cout << "ps = " << pw << ", *pw = " << *pw << endl;
	pw = pw + 1;
	cout << "add 1 to the ps pointer:\n";
	cout << "ps = " << pw << ", *pw = " << *pw << "\n\n";
	cout << "ps = " << ps << ", *ps = " << *ps << endl;
	ps = ps + 1;
	cout << "add 1 to the ps pointer:\n";
	cout << "ps = " << ps << ", *ps = " << *ps << "\n\n";

	cout << "access two element with array notation\n";
	cout << "stack[0] = " << stacks[0]
		<< ", stacks[1] = " << stacks[1] << endl;
	cout << "access two elements with pointer notation\n";
	cout << "*stacks = " << *stacks
		<< ", *(stacks + 1) = " << *(stacks + 1) << endl;

	cout << sizeof(wages) << " = size of wages array\n";
	cout << sizeof(pw) << " = size of pw pointer\n";

	return 0;
}

