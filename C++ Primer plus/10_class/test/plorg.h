/*
 * =====================================================================================
 *
 *       Filename:  plorg.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月10日 15时25分41秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	PLORG_H_
#define 	PLORG_H_

class plorg
{
	private:
		enum 	{ Len = 20 };
		char  	m_name[Len];
		int 	m_ci;
	public:
		plorg( const char * name = "Plorga", int ci = 50 );
		~plorg() {}
		void 	show() const;
		void 	reset_ci( int ci );
};

#endif
