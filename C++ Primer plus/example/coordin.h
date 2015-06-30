/*
 * =====================================================================================
 *
 *       Filename:  coordin.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月04日 23时25分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
//structure templates

#ifndef 	COORDIN_H_
#define 	COORDIN_H_

struct polar
{
	double 	distance;
	double 	angle;
};

struct rect
{
	double 	x;
	double 	y;
};

polar 	rect_to_polar( rect xypos );
void 	show_polar( polar dapos );

#endif
