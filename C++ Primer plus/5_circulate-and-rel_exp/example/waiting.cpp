// =====================================================================================
// 
//       Filename:  waiting.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 16时08分17秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>
#include <ctime>

int main( void )
{
	using namespace std;

	cout << "Enter the delay time, in seconds: ";
	float 	secs;
	cin >> secs;
	clock_t 	delay = secs * CLOCKS_PER_SEC;
	cout << "starting\a\n";
	clock_t 	start = clock();
	while ( clock() - start < delay );

	cout << "done \a\n";

	return 0;
}

