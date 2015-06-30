// =====================================================================================
// 
//       Filename:  and.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年03月05日 13时26分04秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

const int 	ArSize = 6;

int main( void )
{
	using namespace std;

	float naaq[ArSize];
	cout << "Enter the NAAQs (New Age Awareness Quotients) "
		<< "of\nyour neughbors. Program terminates "
		<< "when you make\n" << ArSize << " entries "
		<< "or enter a negative value.\n";

	int 	i = 0;
	float 	temp;
	cout << "First value: ";
	cin >> temp;
	while ( (i < ArSize) && (temp >= 0) )
	{
		naaq[i] = temp;
		++i;
		if ( i < ArSize )
		{
			cout << "Next value: ";
			cin >> temp;
		}
	}
	if ( i == 0 )
	      cout << "No data--bye\n";
	else
	{
		cout << "Enter your NAAQ: ";
		float 	you;
		cin >> you;
		int 	count = 0;
		for ( int j = 0; j < i; j++ )
		      if ( naaq[j] > you )
			    ++count;
		cout << count;
		cout << " of your neighbors have grwater awareness of\n"
			<< "the New Age than you do.\n";
	}

	return 0;
}

