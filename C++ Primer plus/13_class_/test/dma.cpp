/*
 * =====================================================================================
 *
 *       Filename:  dma.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月15日 17时00分28秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "dma.h"
#include <cstring>

using std::strlen;
using std::strcpy;

//baseDMA类的构造函数
baseDMA::baseDMA(const char * l, int r)
{
	label = new char [strlen(l)+1];
	strcpy(label, l);
	rating = r;
}

//baseDMA类的复制构造函数
baseDMA::baseDMA(const baseDMA & rs)
{
	label = new char [strlen(rs.label)+1];
	rating = rs.rating;
}

//baseDMA类输出内容的函数
void baseDMA::View() const
{
	using std::cout;
	using std::endl;
	cout << "label: " << label << endl;
	cout << "rating: " << rating << endl;
}

//baseDMA类重载的赋值运算符
baseDMA & baseDMA::operator=(const baseDMA & bd)
{
	if ( this == &bd )
	      return *this;
	delete [] label;
	label = new char [strlen(bd.label)+1];
	strcpy(label, bd.label);
	rating = bd.rating;
	return *this;
}

//lacksDMA类的构造函数
lacksDMA::lacksDMA(const char * c, const char * l, int r)
{
	color = new char [strlen(c)+1];
	label = new char [strlen(l)+1];
	strcpy(color, c);
	strcpy(label, l);
	rating = r;
}

//lacksDMA类的复制构造函数
lacksDMA::lacksDMA(const lacksDMA & ld)
{
	color = new char [strlen(ld.color)+1];
	label = new char [strlen(ld.label)+1];
	strcpy(color, ld.color);
	strcpy(label, ld.label);
	rating = ld.rating;
}

//lacksDMA类重载后的赋值运算符
lacksDMA & lacksDMA::operator=(const lacksDMA & ld)
{
	if ( this == &ld )
	      return *this;
	delete [] color;
	delete [] label;
	color = new char [strlen(ld.color)+1];
	label = new char [strlen(ld.label)+1];
	strcpy(color, ld.color);
	strcpy(label, ld.label);
	rating = ld.rating;
	return *this;
}

//lacksDMA类的输出函数
void lacksDMA::View() const
{
	using std::cout;
	using std::endl;
	cout << "color: " << color << endl;
	cout << "label: " << label << endl;
	cout << "rating: " << rating << endl;
}

//hasDMA类的构造函数
hasDMA::hasDMA(const char * s, const char * l, int r)
{
	style = new char [strlen(s)+1];
	label = new char [strlen(l)+1];
	strcpy(style, s);
	strcpy(label, l);
	rating = r;
}

//hasDMA类的复制构造函数
hasDMA::hasDMA(const hasDMA & hd)
{
	style = new char [strlen(hd.style)+1];
	label = new char [strlen(hd.label)+1];
	strcpy(style, hd.style);
	strcpy(label, hd.label);
	rating = hd.rating;
}

//hasDMA类重载后的赋值运算符
hasDMA & hasDMA::operator=(const hasDMA & hd)
{
	if ( this == &hd )
	      return *this;
	delete [] style;
	delete [] label;
	style = new char [strlen(hd.style)+1];
	label = new char [strlen(hd.label)+1];
	strcpy(style, hd.style);
	strcpy(label, hd.label);
	rating = hd.rating;
	return *this;
}

//hasDMA类的输出函数
void hasDMA::View() const
{
	using std::cout;
	using std::endl;
	cout << "style: " << style << endl;
	cout << "label: " << label << endl;
	cout << "rating: " << rating << endl;
}
