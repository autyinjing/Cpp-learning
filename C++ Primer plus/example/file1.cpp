/*
 * =====================================================================================
 *
 *       Filename:  file1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月04日 23时29分45秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "coordin.h"

using namespace std;

int main( int argc, char *argv[] )
{
	rect 	rplace;
	polar 	pplace;

	cout << "Enter the x and y value: ";
	while ( cin >> rplace.x >> rplace.y )
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers (q to quit)";
	}
	cout << "Bye!\n";

	return 0;
}
