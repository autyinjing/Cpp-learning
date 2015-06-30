/*
 * =====================================================================================
 *
 *       Filename:  funtemp.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月04日 10时59分37秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

template <typename T>

void 	Swap( T &a, T &b );

int main( int argc, char *argv[] )
{
	using namespace std;
	int 	i = 10;
	int 	j = 20;
	cout << "i, j = " << i << ", " << j << ".\n";
	cout << "Using compiler-generated int swapper:\n";
	Swap(i, j);
	cout << "Now i, j = " << i << ", " << j << ".\n";

	double x = 24.5;
	double y = 81.7;
	cout << "x, y = " << x << ", " << y << ".\n";
	cout << "Using compiler-generated double swapper:\n";
	Swap(x, y);
	cout << "Now x, y = " << x << ", " << y << ".\n";

	return 0;
}

template <typename T>
void Swap( T &a, T &b )
{
	T 	temp;
	temp = a;
	a = b;
	b = temp;
}
