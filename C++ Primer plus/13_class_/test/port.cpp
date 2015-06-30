/*
 * =====================================================================================
 *
 *       Filename:  port.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月15日 19时51分21秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include "port.h"
#include <cstring>

using std::strlen;
using std::strcpy;

//构造函数
Port::Port(const char * br, const char * st, int b)
{
	brand = new char [strlen(st)+1];
	strcpy(brand, br);
	strcpy(style, st);
	bottles = b;
}

//复制构造函数
Port::Port(const Port & p)
{
	brand = new char [strlen(p.brand)+1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
}

//赋值运算符
Port & Port::operator=(const Port & p)
{
	if ( this == &p )
	      return *this;
	delete [] brand;
	brand = new char [strlen(p.brand)+1];
	strcpy(brand, p.brand);
	strcpy(style, p.style);
	bottles = p.bottles;
	return *this;
}

//+=运算符
Port & Port::operator+=(int b)
{
	bottles += b;
	return *this;
}

//-=运算符
Port & Port::operator-=(int b)
{
	bottles -= b;
	return *this;
}

//Show函数
void Port::Show() const
{
	using std::cout;
	using std::endl;
	cout << "Brand: " << brand << endl;
	cout << "Kind: " << style << endl;
	cout << "Bottles: " << bottles << endl;
}

//<<运算符
ostream & operator<<(ostream & os, const Port & p)
{
	os << p.brand << ", " << p.style << ", " << p.bottles;
	return os;
}

//构造函数
VintagePort::VintagePort()
{
	nickname = nullptr;
}

//构造函数
VintagePort::VintagePort(const char * br, int b, const char * nn, int y) : Port(br, "none",  b)
{
	nickname = new char [strlen(nn)+1];
	year = y;
}

//复制构造函数
VintagePort::VintagePort(const VintagePort & vp) : Port(vp)
{
	nickname = new char [strlen(vp.nickname)+1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
}

//重载的赋值运算符
VintagePort & VintagePort::operator=(const VintagePort & vp)
{
	if ( this == &vp )
	      return *this;
	Port::operator=(vp);
	delete [] nickname;
	nickname = new char [strlen(vp.nickname)+1];
	strcpy(nickname, vp.nickname);
	year = vp.year;
	return *this;
}

//重载后的<<运算符
ostream & operator<<(ostream & os, const VintagePort & vp)
{
	os << (const Port &) vp;
	os << "nickname: " << vp.nickname << std::endl;
	return os;
}
