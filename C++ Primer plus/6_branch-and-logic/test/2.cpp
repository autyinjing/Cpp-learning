// =====================================================================================
// 
//       Filename:  2.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年03月24日 19时55分46秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

int main( void )
{
	using namespace std;
	double 	donation[10];
	int 	count = 0;

	while ( cin >> (donation[count++]) );
	count--;

	double 	total = 0.0;
	double 	average;
	int 	count2 = 0;
	for ( int i = 0; i < count; i++ )
	      total += donation[i];
	average = total / count;
	for ( int i = 0; i <= count; i++ )
	      if ( donation[i] > average )
		    count2++;
	cout << "Average = " << average << ", total " << count2 << " number over the average!\n";

	return 0;
}
