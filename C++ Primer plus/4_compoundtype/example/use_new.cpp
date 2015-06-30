// =====================================================================================
// 
//       Filename:  use_new.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 09时48分29秒
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

	int 	night = 1001;
	int 	*pt = new int;
	*pt = 1001;

	cout << "night value = ";
	cout << night << ": location " << &night << endl;
	cout << "int ";
	cout << "value = " << *pt << ": location = " << pt << endl;

	double 	*pd = new double;
	*pd = 10000001.0;

	cout << "double ";
	cout << "value = " << *pd << ": location = " << pd << endl;
	cout << "location of pointer pd: " << &pd << endl;
	cout << "size of pt = " << sizeof(pt);
	cout << ": sizeof *pt = " << sizeof(*pt) << endl;
	cout << "size of pd = " << sizeof pd;
	cout << ": size of *pd = " << sizeof(*pd) << endl;

	return 0;
}

