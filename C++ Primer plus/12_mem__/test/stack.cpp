/*
 * =====================================================================================
 *
 *       Filename:  stack.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月14日 12时43分40秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "stack.h"

Stack::Stack( int n )
{
	if ( n < 0 )
	{
		std::cout << "Number is error!\n";
		n = 0;
	}
	else
	      size = n;
	pitems = new Item [size+1];
	top = 0;
	std::cout << "stack create!\n";
}

Stack::Stack( const Stack & st )
{
	size = st.size;
	pitems = new Item [size+1];
	top = st.top;
	std::cout << "stack be copied!\n";
}

Stack::~Stack()
{
	delete [] pitems;
	std::cout << "stack deaded!\n";
}

bool Stack::isempty() const
{
	if ( top == 0 )
	{
		std::cout << "Stack is empty!\n";
		return true;
	}
	return false;

}

bool Stack::isfull() const
{
	if ( top == size )
	{
		std::cout << "Stack is full!\n";
		return true;
	}
	return false;
}

bool Stack::push( const Item & item )
{
	if ( isfull() )
	      return false;
	pitems[top++] = item;
	return true;
}

bool Stack::pop( Item & item )
{
	if ( isempty() )
	      return false;
	item = pitems[--top];
	return true;
}

Stack & Stack::operator=( const Stack & st )
{
	if ( &st == this )
	      return *this;
	delete [] pitems;
	pitems = new Item [size+1];
	for ( int i = 0; i < top; i++ )
	      pitems[i] = st.pitems[i];
	top = st.top;
	size = st.size;
	return *this;
}
