// =====================================================================================
// 
//       Filename:  cingolf.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年03月24日 12时33分47秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

const int 	Max = 5;

int main()
{
	using namespace std;

	int 	golf[Max];

	cout << "Please enter your golf scores.\n";
	cout << "You must enter " << Max << " rounds.\n";

	int 	i;
	for ( i = 0; i < Max; ++i )
	{
		cout << "round #" << i+1 << ": ";
		while ( !(cin >> golf[i]) )
		{
			cin.clear();
			while ( cin.get() != '\n' )
			      continue;
			cout << "Please enter a number: ";
		}
	}

	double 	total = 0.0;
	for ( i = 0; i < Max; ++i )
	      total += golf[i];
	cout << total / Max << " = average score "
		<< Max << " rounds\n";

	return 0;
}
