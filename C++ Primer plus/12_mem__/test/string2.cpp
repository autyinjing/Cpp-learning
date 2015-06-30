/*
 * =====================================================================================
 *
 *       Filename:  string1.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月12日 14时35分53秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <cstring>
#include <cctype>
#include "string2.h"

using std::cin;
using std::cout;

int String::num_strings = 0;

int String::HowMany()
{
	return num_strings;
}

String::String( const char * s )
{
	len = std::strlen(s);
	str = new char [len + 1];
	std::strcpy(str, s);
	num_strings++;
}

String::String()
{
	len = 4;
	str = new char [1];
	str[0] = '\0';
	num_strings++;
}

String::String( const String & st ) //复制构造函数
{
	num_strings++;
	len = st.len;
	str = new char [len + 1];
	std::strcpy(str, st.str);
}

String::~String()
{
	--num_strings;
	delete [] str;
}

String & String::operator=( const String & st )
{
	if ( this == &st )
	      return *this; 	//判断是否自我赋值
	delete [] str;
	len = st.len;
	str = new char[len + 1];
	std::strcpy(str, st.str);
	return *this;
}

String & String::operator=( const char * s )
{
	delete [] str;
	len = std::strlen(s);
	str = new char[len + 1];
	std::strcpy(str, s);
	return *this;
}

String & operator+( const String & s1, const String & s2 )
{
	String 	*s = new String;
	s->len = std::strlen(s1.str) + std::strlen(s2.str);
	s->str = new char [s->len+1];
	std::strcpy(s->str, s1.str);
	std::strcat(s->str, s2.str);
	return *s;
}

String & String::Stringup()
{
	for ( int i = 0; str[i]; i++ )
	      str[i] = std::toupper(str[i]);
	return *this;
}

String & String::Stringlow()
{
	for ( int i = 0; str[i]; i++ )
	      str[i] = std::tolower(str[i]);
	return *this;
}

int String::ch_count( char ch )
{
	int 	ch_count = 0;
	for ( int i = 0; str[i]; i++ )
	      if ( str[i] == ch )
		    ch_count++;
	return ch_count;
}

//可以读写的下标运算符
char & String::operator[]( int i )
{
	return str[i];
}

//仅可以读的下标运算符
const char & String::operator[]( int i ) const
{
	return str[i];
}

bool operator<( const String &st1, const String &st2 )
{
	return (std::strcmp(st1.str, st2.str) < 0);
}

bool operator>( const String &st1, const String &st2 )
{
	return (std::strcmp(st1.str, st2.str) > 0);
}

bool operator==( const String &st1, const String &st2 )
{
	return (std::strcmp(st1.str, st2.str) == 0);
}

ostream & operator<<( ostream & os, const String & st )
{
	os << st.str;
	return os;
}

istream & operator>>( istream & is, String & st )
{
	char 	temp[String::CINLIM];
	is.get(temp, String::CINLIM);
	if ( is )
	      st = temp; 	//调用构造函数
	while ( is && is.get() != '\n' )
	      continue;
	return is;
}
