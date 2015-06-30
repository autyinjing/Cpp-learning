/*
 * =====================================================================================
 *
 *       Filename:  Person.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 22时31分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	PERSON_H_
#define 	PERSON_H_

#include <string>

class Person
{
	private:
		static const int	LIMIT = 25;
		std::string 		lname;
		char 			fname[LIMIT];
	public:
		Person() { lname = ""; fname[0] = '\0'; }
		Person(const std::string & ln, const char * fn = "Heyyou");
		void 	Show() const;
		void 	FormalShow() const;
};

#endif
