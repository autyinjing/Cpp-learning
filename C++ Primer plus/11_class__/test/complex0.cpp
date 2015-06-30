/*
 * =====================================================================================
 *
 *       Filename:  complex.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月11日 16时22分11秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include "complex0.h"

Complex Complex::operator+( const Complex & c ) const
{
	Complex sum;
	sum.shibu = shibu + c.shibu;
	sum.xubu = xubu + c.xubu;
	return sum;
}

Complex Complex::operator-( const Complex & c ) const
{
	Complex diff;
	diff.shibu = shibu - c.shibu;
	diff.xubu = xubu - c.xubu;
	return diff;
}

Complex operator*( const Complex & c1, const Complex & c2 )
{
	Complex mult;
	mult.shibu = c1.shibu * c2.shibu - c1.xubu * c2.xubu;
	mult.xubu = c1.shibu * c2.shibu + c1.xubu * c2.xubu;
	return mult;
}

Complex operator*( const Complex & c, double n )
{
	return Complex(n * c.shibu, n * c.xubu);
}

Complex operator*( double n, const Complex & c )
{
	return c * n;
}

Complex Complex::operator~()
{
	return Complex(shibu, -xubu);
}

std::ostream & operator<<( std::ostream & os, const Complex & c )
{
	os << '(' << c.shibu << ',' << c.xubu << "i)" << std::endl;
	return os;
}

/*std::istream & operator>>( std::istream & is, const Complex & c )
{
	cout << "real: ";
	is >> c.shibu;
	cout << "imaginary: ";
	is >> c.xubu;
	return is;
}*/
