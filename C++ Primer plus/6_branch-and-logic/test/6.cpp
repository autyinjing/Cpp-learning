// =====================================================================================
// 
//       Filename:  6.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年03月24日 22时03分13秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>
#include <string>

using namespace std;

typedef struct
{
	string 	name;
	double 	money;
	bool 	tag;
}Patrons;

int main( void )
{
	int 	count;
	Patrons *patron;

	cout << "Enter the count of patrons: ";
	(cin >> count).get();
	if ( count > 0 )
	      patron = new Patrons[count];
	else 
	      patron = NULL;
	for ( int i = 0; i < count; i++ )
	{
		cout << "Enter the " << i+1 << "th name: ";
		(cin >> patron[i].name).get();
		cout << "Enter the " << i+1 << "th money: ";
		(cin >> patron[i].money).get();
		if ( patron[i].money > 10000 )
		      patron[i].tag = 1;
		else
		      patron[i].tag = 0;
	}

	int 	j = 0;
	cout << "Grand Patrons:\n";
	for ( int i = 0; i < count; i++ )
	      if ( patron[i].tag == 1 )
	      {
		      cout << patron[i].name << ": " << patron[i].money << endl;
		      j++;
	      }
	if ( j == 0 )
	      cout << "none.\n";
	cout << "Patrons:\n";
	j = 0;
	for ( int i = 0; i < count; i++ )
	      if ( patron[i].tag == 0 )
	      {
		      cout << patron[i].name << ": " << patron[i].money << endl;
		      j++;
	      }
	if ( j == 0 )
	      cout << "none.\n";

	delete [] patron;

	return 0;
}
