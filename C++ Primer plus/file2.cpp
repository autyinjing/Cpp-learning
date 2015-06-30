/*
 * =====================================================================================
 *
 *       Filename:  file2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月05日 12时12分46秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

static double average( int a, int b )
{
	return (double)(a + b) / 2.0;
}

void print_dou_ave( int a, int b )
{
	using namespace std;

	cout << average(a, b) << endl;
}
