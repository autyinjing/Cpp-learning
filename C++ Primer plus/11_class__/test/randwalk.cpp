/*
 * =====================================================================================
 *
 *       Filename:  randwalk.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月10日 19时54分04秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include "vector.h"

int main( int argc, char *argv[] )
{
	using namespace std;
	using VECTOR::Vector;
	srand(time(0));
	double 	direction;
	Vector 	step;
	Vector 	result;
	unsigned long 	steps = 0;
	double 	target;
	double 	dstep;
	int 	n, i = 0, flag = 1;
	double 	highest, lowest, average, sum;
	sum = 0.0;
	ofstream 	fout;
	fout.open("thewalk.txt");

	cout << "Enter the N: ";
	cin >> n;
	cout << "Enter target distance (q to quit): ";
	while ( i++ < n )
	{
		cin >> target;
		if ( flag == 1 )
		{
			highest = lowest = target;
			flag = 0;
		}
		cout << "Enter step length: ";
		if ( !(cin >> dstep) )
		      break;

		fout << "Target Distance: " << target << ", Step Size: " << dstep << endl;
		while ( result.magval() < target )
		{
			direction = rand() % 360;
			step.reset(dstep, direction, Vector::POL);
			fout << steps << ": " << result << endl;
			result = result + step;
			steps++;
		}
		fout << "After " << steps << " steps, the subject "
			"has the following location:\n";
		if ( highest < steps )
		      highest = steps;
		if ( lowest > steps )
		      lowest = steps;
		sum += steps;
		fout << result << endl;
		result.polar_mode();
		fout << " or\n" << result << endl;
		fout << "Average outward distance per step = "
			<< result.magval() / steps << endl;
		steps = 0;
		result.reset(0.0, 0.0);
		cout << "Enter target distance (q to quit): ";
	}
	average = sum / i;
	cout << "The highest: " << highest << ", the lowest: "
		<< lowest << ", the average: " << average << endl;
	cout << "Bye!\n";
	cin.clear();
	while ( cin.get() != '\n' )
	      continue;
	fout.close();

	return 0;
}
