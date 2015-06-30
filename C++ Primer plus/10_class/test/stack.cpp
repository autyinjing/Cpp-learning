/*
 * =====================================================================================
 *
 *       Filename:  stack.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 19时52分46秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include "stack.h"

Stack::Stack()
{
	top = 0;
	total = 0;
}

bool Stack::isempty() const
{
	return top == 0;
}

bool Stack::isfull() const
{
	return top == MAX;
}

bool Stack::push(const Item & item)
{
	if ( top < MAX )
	{
		items[top++] = item;
		return true;
	}
	else
	      return false;
}

bool Stack::pop(Item & item)
{
	if ( top > 0 )
	{
		item = items[--top];
		total += item.payment;
		return true;
	}
	else
	      return false;
}
