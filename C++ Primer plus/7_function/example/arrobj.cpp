/*
 * =====================================================================================
 *
 *       Filename:  arrobj.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月27日 11时54分37秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include <array>
#include <string>

const int 	Seasons = 4;
const std::array<std::string, Seasons> Snames =
{ "Spring", "Summer", "Fall", "Winter" };

void fill(std::array<double, Seasons> * pa);
void show(std::array<double, Seasons> da);

int main( int argc, char *argv[] )
{
	std::array<double, Seasons> expenses;
	fill(&expenses);
	show(expenses);

	return 0;
}

void fill(std::array<double, Seasons> * pa)
{
	using namespace std;
	for ( int i = 0; i < Seasons; ++i )
	{
		cout << "" << Snames[i] << " expenses: ";
		cin >> (*pa)[i];
	}
}

void show(std::array<double, Seasons> da)
{
	using namespace std;
	double total = 0.0;
	cout << "\nEXPENSES\n";
	for ( int i = 0; i < Seasons; ++i )
	{
		cout << Snames[i] << ": $" << da[i] << endl;
		total += da[i];
	}
	cout << "Total Expenses: $" << total << endl;
}
