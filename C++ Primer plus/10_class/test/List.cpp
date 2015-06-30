/*
 * =====================================================================================
 *
 *       Filename:  List.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月10日 16时01分31秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "List.h"

int List::add( const Item & data )
{
	if ( m_tail >= LEN )
	{
		std::cout << "Is full!\n";
		return 0;
	}
	m_data[m_tail++] = data;
	return 1;
}

int List::isempty() const
{
	return m_tail == 0;
}

int List::isfull() const
{
	return m_tail == LEN;
}

void List::visit( void (*pf)(Item & item) )
{
	for ( int i = 0; i < m_tail; i++ )
	      pf( m_data[i] );
}
