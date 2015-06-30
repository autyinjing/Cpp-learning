/*
 * =====================================================================================
 *
 *       Filename:  stack.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月14日 12时39分47秒
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

typedef int 	Item;

class Stack
{
	private:
		enum { MAX = 10 };
		Item 	* pitems;
		int 	size;
		int 	top;
	public:
		Stack( int n = MAX );
		Stack( const Stack & st );
		~Stack();
		bool isempty() const;
		bool isfull() const;
		bool push( const Item & item );
		bool pop( Item & item );
		Stack & operator=( const Stack & st );
};

#endif
