/*
 * =====================================================================================
 *
 *       Filename:  99.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月26日 17时15分42秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;
const int 	Size = 15;

struct donation
{
	string 	name;
	int 	money;
};

int main( int argc, char *argv[] )
{
	ifstream 	inFile;

	inFile.open("donate.txt");
	if ( !inFile.is_open() )
	{
		cout << "Can't open the file !";
		exit(EXIT_FAILURE);
	}
	
	int 		num;

	inFile >> num;
	if ( !inFile.good() )
	      cout << "Mistatic!\n";
	donation * 	dp = new donation [num];
	int 		i = 0;

	while ( inFile.good() )
	{
		inFile >> dp[i].name;
		inFile >> dp[i].money;
		++i;
	}
	inFile.close();

	cout << num << endl;
	for ( int j = 0; j < i; ++j )
	      cout << dp[i].name << endl
		      << dp[i].money << endl;
	delete [] dp;

	return 0;
}
