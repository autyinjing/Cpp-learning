/*
 * =====================================================================================
 *
 *       Filename:  glorg.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月10日 15时33分53秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "plorg.h"

plorg::plorg( const char * name, int ci )
{
	int 	i;
	for ( i = 0; name[i]; i++ )
	      m_name[i] = name[i];
	m_name[i] = '\0';
	m_ci = ci;
}

void plorg::show() const
{
	using std::cout;
	using std::endl;
	cout << "name: " << m_name << endl;
	cout << "ci: " << m_ci << endl;
}

void plorg::reset_ci( int ci )
{
	m_ci = ci;
}
