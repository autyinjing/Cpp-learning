/*
 * =====================================================================================
 *
 *       Filename:  useclassic.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月15日 10时48分22秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
using namespace std;
#include "classic.h"

void Bravo(const Cd & disk);

int main( int argc, char *argv[] )
{
	Cd 	c1("Beatles", "Capitol", 14, 35.5);
	Classic c2 = Classic("Alfred Brendel", "Philips", 2, 57.17, 
				"Piano Sonata in B flat, Fantasia in C");
	Cd 	* pcd = &c1;

	cout << "Using object directly:\n";
	c1.Report();
	c2.Report();

	cout << "Using type cd * poinyer to objects:\n";
	pcd->Report();
	pcd = &c2;
	pcd->Report();

	cout << "Calling a function with a Cd reference argument:\n";
	Bravo(c1);
	Bravo(c2);

	cout << "Testing assignment: ";
	Classic copy;
	copy = c2;
	copy.Report();

	return 0;
}

void Bravo(const Cd & disk)
{
	disk.Report();
}
