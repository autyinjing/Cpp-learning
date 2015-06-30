/*
 * =====================================================================================
 *
 *       Filename:  fun_ptr.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月27日 12时44分53秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

double 	betsy(int);
double 	pam(int);

void estimate(int lines, double (*pf)(int));

int main( int argc, char *argv[] )
{
	using namespace std;
	int 	code;

	cout << "How many lines of code do you need? ";
	cin >> code;
	cout << "Here's Betsy estimate:\n";
	estimate(code, betsy);
	cout << "Here's Pam's estimate:\n";
	estimate(code, pam);

	return 0;
}

double betsy(int lns)
{
	return 0.05 * lns;
}

double pam(int lns)
{
	return 0.03 * lns + 0.0004 * lns * lns;
}

void estimate(int lines, double (*pf)(int))
{
	using namespace std;
	cout << lines << " lines will take ";
	cout << (*pf)(lines) << " hour(s)\n";
}
