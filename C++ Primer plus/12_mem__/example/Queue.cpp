/*
 * =====================================================================================
 *
 *       Filename:  Queue.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月13日 21时43分56秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include "Queue.h"
#include <cstdlib>

Queue::Queue(int qs) : qsize(qs)
{
	front = rear = NULL;
	items = 0;
}

bool Queue::isempty() const
{
	return items == 0;
}

bool Queue::isfull() const
{
	return items == qsize;
}

int Queue::queuecount() const
{
	return items;
}

bool Queue::enqueue( const Item & item )
{
	if ( isfull() )
	      return false;
	Node * add = new Node;
	add->item = item;
	add->next = NULL;
	items++;
	if ( front == NULL)
	      front = add;
	else
	      rear->next = add;
	rear = add;
	return true;
}

bool Queue::dequeue( Item & item )
{
	if ( isempty() )
	      return false;
	item = front->item;
	items--;
	Node * temp = front;
	front = front->next;
	delete temp;
	if ( items == 0 )
	      rear = NULL;
	return true;
}

Queue::~Queue()
{
	Node * temp;
	while ( front != NULL )
	{
		temp = front;
		front = front->next;
		delete temp;
	}
}

void Customer::set( long when )
{
	processtime = std::rand() % 3 + 1;
	arrive = when;
}
