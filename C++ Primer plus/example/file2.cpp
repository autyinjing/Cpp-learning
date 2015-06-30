/*
 * =====================================================================================
 *
 *       Filename:  file2.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月04日 23时32分09秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include <cmath>
#include "coordin.h"

polar rect_to_polar( rect xypos )
{
	using namespace std;
	polar 	answer;

	answer.distance = 
		sqrt( xypos.x * xypos.x + xypos.y * xypos.y );
	answer.angle = atan2( xypos.y, xypos.x );
	return answer;
}

void show_polar( polar dapos )
{
	using namespace std;
	const 	double Rad_to_deg = 57.29577951;

	cout << "distance = " << dapos.distance;
	cout << ", angle = " << dapos.angle * Rad_to_deg;
	cout << " degrees\n";
}
