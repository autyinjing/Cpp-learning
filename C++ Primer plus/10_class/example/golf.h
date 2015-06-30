/*
 * =====================================================================================
 *
 *       Filename:  golf.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 22时51分50秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	GOLF_H_
#define 	GOLF_H_

#include <string>

class golf
{
	private:
		std::string 	fullname;
		int 		handicap;
	public:
		golf();
		golf(const std::string & name, int hc);
		~golf() {}
		const golf & 	setgolf();
		void 		sethandicap( int hc );
		void 		show() const;
};

#endif
