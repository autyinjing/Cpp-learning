/*
 * =====================================================================================
 *
 *       Filename:  Move.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月10日 00时09分06秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "Move.h"

Move::Move(double a, double b)
{
	x = a;
	y = b;
}

void Move::showmove() const
{
	using std::cout;
	using std::endl;
	cout << "x: " << x << ", y: " << y << endl;
}

Move Move::add(const Move & m) const
{
	Move 	temp;
	temp.x = m.x;
	temp.y = m.y;
	return temp;
}

void Move::reset(double a, double b)
{
	x = a;
	y = b;
}
