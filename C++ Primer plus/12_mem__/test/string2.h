/*
 * =====================================================================================
 *
 *       Filename:  string1.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月12日 14时28分03秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	STRING1_H_
#define 	STRING1_H_

#include <iostream>
using std::ostream;
using std::istream;

class String
{
	private:
		char 		* str;
		int 		len;
		static int 	num_strings;
		static const int 	CINLIM = 80;
	public:
		String( const char * s );
		String();
		String( const String & );
		~String();
		int length() const { return len; }
		String & operator=( const String & );
		String & operator=( const char * );
		String & Stringup();
		String & Stringlow();
		int ch_count( char ch );
		char & operator[]( int i );
		const char & operator[]( int i ) const;

		friend String & operator+( const String & s1, const String & s2 );
		friend bool operator<( const String &st, const String &st2 );
		friend bool operator>( const String &st1, const String &st2 );
		friend bool operator==( const String &st, const String & st2 );
		friend ostream & operator<<(ostream & os, const String & st );
		friend istream & operator>>(istream & is, String & st);
		static int HowMany();
};

#endif
