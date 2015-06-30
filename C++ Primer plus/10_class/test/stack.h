/*
 * =====================================================================================
 *
 *       Filename:  stack.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 19时50分22秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	STACK_H_
#define 	STACK_H_

struct customer
{
	char 	fullname[35];
	double 	payment;
};

typedef customer 	Item;

class Stack
{
	private:
		enum { MAX = 10 };
		Item 	items[MAX];
		double 	total;
		int 	top;
	public:
		Stack();
		bool 	isempty() const;
		bool 	isfull() const;
		bool 	push(const Item & item);
		bool 	pop(Item & item);
};

#endif
