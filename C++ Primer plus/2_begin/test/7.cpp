// =====================================================================================
// 
//       Filename:  7.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月20日 12时16分47秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

using namespace std;

void Print_Time( int hours, int minutes )
{
	cout << "Time: " << hours << ":" << minutes << endl;
}

int main(int argc, char *argv[])
{
	int 	hours;
	cout << "Enter the number of hours: ";
	cin >> hours;

	int 	minutes;
	cout << "Enter the number of minutes: ";
	cin >> minutes;

	Print_Time( hours, minutes );

	return 0;
}

