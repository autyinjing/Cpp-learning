/*
 * =====================================================================================
 *
 *       Filename:  strngbad.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月11日 23时28分12秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	STRNGBAD_H_
#define 	STRNGBAD_H_

#include <iostream>

class StringBad
{
	private:
		char 		* str;
		int 		len;
		static int 	num_strings;
	public:
		StringBad( const char * s );
		StringBad();
		~StringBad();
		friend std::ostream & operator<<( std::ostream & os, const StringBad & st );
};

#endif
