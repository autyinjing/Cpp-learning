/*
 * =====================================================================================
 *
 *       Filename:  use_stuc.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月16日 15时39分13秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "studenti.h"

using std::cin;
using std::cout;using std::endl;

void set(Student & sa, int n);
const int 	pupils = 3;
const int 	quizzes = 5;

int main( int argc, char *argv[] )
{
	Student 	ada[pupils] =
	{Student(quizzes), Student(quizzes), Student(quizzes)};

	int 	i;
	for ( i = 0; i < pupils; ++i )
	      set(ada[i], quizzes);
	cout << "\nStudent List:\n";
	for ( i = 0; i < pupils; ++i )
	      cout << ada[i].Name() << endl;
	cout << "\nResults:";
	for ( i = 0; i < pupils; ++i )
	{
		cout << endl << ada[i];
		cout << "average: " << ada[i].Average() << endl;
	}
	cout << "Done.\n";

	return 0;
}

void set(Student & sa, int n)
{
	cout << "Please enter the student's name: ";
	getline(cin, sa);
	cout << "Please enter " << n << " quiz scores:\n";
	for ( int i = 0; i < n; i++ )
	      cin >> sa[i];
	while ( cin.get() != '\n' )
	      continue;
}
