/*
 * =====================================================================================
 *
 *       Filename:  Move.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月10日 00时06分44秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	MOVE_H_
#define 	MOVE_H_

class Move
{
	private:
		double 	x;
		double 	y;
	public:
		Move(double a = 0, double b = 0);
		void showmove() const;
		Move add(const Move & m) const;
		void reset(double a = 0, double b = 0);
};

#endif
