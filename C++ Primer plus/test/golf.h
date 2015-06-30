/*
 * =====================================================================================
 *
 *       Filename:  golf.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月05日 12时45分38秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef GOLF_H_
#define GOLF_H_

const int 	Len = 40;
struct golf
{
	char 	fullname[Len];
	int 	handicap;
};

void 	setgolf(golf & g, const char * name, int hc);
int 	setgolf(golf & g);
void 	handicap(golf & g, int hc);
void 	showgolf(const golf & g);

#endif
