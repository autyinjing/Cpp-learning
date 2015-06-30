/*
 * =====================================================================================
 *
 *       Filename:  stacker.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 19时55分57秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include <cctype>
#include "stack.h"

int main( int argc, char *argv[] )
{
	using namespace std;
	Stack 		st;
	char 		ch;
	unsigned long 	po;
	cout << "Please enter A to add a purchase order,\n"
		<< "P to process a PO, or Q to Quit.\n";
	while ( cin >> ch && toupper(ch) != 'Q' )
	{
		while ( cin.get() != '\n' )
		      continue;
		if ( !isalpha(ch) )
		{
			cout << '\a';
			continue;
		}
		switch(ch)
		{
			case 'A':
			case 'a': cout << "Enter a PO number to add: ";
				  cin >> po;
				  if ( st.isfull() )
					cout << "stack already full\n";
				  else
					st.push(po);
				  break;
			case 'P':
			case 'p': if ( st.isempty() )
					cout << "stack already empty\n";
				  else
				  {
					  st.pop(po);
					  cout << "PO #" << po << " popped\n";
				  }
				  break;
		}
		cout << "Please enter A to add a purchase order,\n"
			<< "P to process a PO, or Q to quit.\n";
	}
	cout << "Bye\n";

	return 0;
}
