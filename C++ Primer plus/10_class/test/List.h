/*
 * =====================================================================================
 *
 *       Filename:  list.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月10日 15时49分44秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	LIST_H_
#define 	LIST_H_

typedef int 	Item;

class List
{
	private:
		static const int 	LEN = 128;
		Item 			m_data[LEN];
		int 			m_tail;
	public:
		List() { m_tail = 0; }
		~List() {}
		int 	add( const Item & data );
		int 	isempty() const;
		int 	isfull() const;
		void 	visit( void (*pf)(Item &) );
};

#endif
