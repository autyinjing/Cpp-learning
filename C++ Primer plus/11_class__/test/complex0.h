/*
 * =====================================================================================
 *
 *       Filename:  fushu.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月11日 16时10分15秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	COMPLEX0_H_
#define 	COMPLEX0_H_

#include <iostream>

class Complex
{
	private:
		double 	shibu;
		double 	xubu;
	public:
		Complex() { shibu = 0.0; xubu = 0.0; }
		Complex( double x, double y ) { shibu = x; xubu = y; }
		~Complex() {}
		Complex operator+( const Complex & c ) const;
		Complex operator-( const Complex & c ) const;
		friend Complex operator*( const Complex & c1, const Complex & c2 );
		friend Complex operator*( const Complex & c, double n );
		friend Complex operator*( double n, const Complex & c );
		Complex operator~();
		friend std::ostream & operator<<( std::ostream & os, const Complex & c );
		friend std::istream & operator>>( std::istream & is, const Complex & c );
};

#endif
