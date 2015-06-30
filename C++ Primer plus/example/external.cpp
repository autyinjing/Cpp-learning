/*
 * =====================================================================================
 *
 *       Filename:  external.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月05日 00时10分42秒
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

double 	warming = 0.3;

void 	update(double dt);
void 	local();

int main( int argc, char *argv[] )
{
	cout << "Global warming is " << warming << " degrees.\n";
	update( 0.1 );
	cout << "Global warming is " << warming << " degrees.\n";
	local();
	cout << "Global warming is " << warming << " degrees.\n";

	return 0;
}
