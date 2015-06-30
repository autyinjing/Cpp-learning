/*
 * =====================================================================================
 *
 *       Filename:  usetime1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月10日 16时55分31秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "mytime1.h"

int main( int argc, char *argv[] )
{
	using namespace std;
	Time 	planning;
	Time 	coding(2, 40);
	Time 	fixing(5, 55);
	Time 	total;

	cout << "planning time = ";
	planning.Show();
	cout << endl;

	cout << "coding time = ";
	coding.Show();
	cout << endl;

	cout << "fixing time = ";
	fixing.Show();
	cout << endl;

	total = coding + fixing;
	cout << "coding + fixing = ";
	total.Show();
	cout << endl;

	Time 	morefixing(3, 28);
	cout << "more fixing time = ";
	morefixing.Show();
	cout << endl;
	total = morefixing.operator+(total);
	cout << "morefixing.operator+(total) = ";
	total.Show();
	cout << endl;


	return 0;
}
