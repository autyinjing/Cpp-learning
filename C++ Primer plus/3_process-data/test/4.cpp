// =====================================================================================
// 
//       Filename:  4.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月21日 11时48分32秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

int main(int argc, char *argv[])
{
	using namespace std;

	long 		seconds;
	int 		minutes, min_s;
	int 		hours, hou_s;
	int 		days, day_s;
	int 		second_s;
	const int 	Day_hour = 12;
	const int 	Hour_minute = 60;
	const int 	Minute_second = 60;

	cout << "Enter the seconds: ";
	cin >> seconds;

	days = seconds / Minute_second / Hour_minute / Day_hour;
	day_s = days * Day_hour * Hour_minute * Minute_second;
	hours = (seconds - day_s) / Minute_second / Hour_minute;
	hou_s = hours * Hour_minute * Minute_second;
	minutes = (seconds - day_s - hou_s) / Minute_second;
	min_s = minutes * Minute_second;
	second_s = seconds - day_s - hou_s - min_s;

	cout << seconds << " seconds = " << days << " days, " << hours << " hours, " << minutes << " minutes, " << second_s << " seconds.\n";

	return 0;
}
