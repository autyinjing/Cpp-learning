/*
 * =====================================================================================
 *
 *       Filename:  useport.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月15日 20时22分47秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "port.h"

int main( int argc, char *argv[] )
{
	using namespace std;
	Port 	p("Gallo", "tawny", 20);
	cout << p << endl;
	p.Show();

	VintagePort 	vp("yin", 10, "honey", 1900);
	VintagePort 	vp2 = vp;
	cout << vp << endl;
	vp2.Show();

	p += 8;
	p.Show();
	p -= 10;
	cout << p << endl;

	return 0;
}
