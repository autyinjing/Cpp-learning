/*
 * =====================================================================================
 *
 *       Filename:  strtype.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月25日 15时30分47秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include <string>

int main( int argc, char *argv[] )
{
	using namespace std;

	string 	str1;
	string 	str2 = "yinjing";
	string 	str3 { "honey" }, str4;

	str1 = " and ";
	str2 += (str1 + str3);
	str2 += "! ";

	cout << "input the name:";
	getline(cin, str4);
	str2 = str2 + str4;
	cout << "str2: " << str2 << endl;
	cout << "sizeof str2: " << str2.size() << endl;

	return 0;
}

