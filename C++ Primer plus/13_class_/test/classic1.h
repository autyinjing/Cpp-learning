/*
 * =====================================================================================
 *
 *       Filename:  cd.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月15日 10时07分10秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	CLASSIC_H_
#define 	CLASSIC_H_

class Cd
{
	private:
		char 	performers[50];
		char 	label[20];
		int 	selections;
		double 	playtime;
	public:
		Cd(const char * s1, const char * s2, int n, double x);
		Cd(const Cd & d);
		Cd() {}
		virtual ~Cd() {}
		virtual void Report() const;
		Cd & operator=(const Cd & d);
};

class Classic : public Cd
{
	private:
		char 	works[50];
	public:
		Classic(const char * s1, const char * s2, int n, double x, const char * w);
		Classic(const Cd & c, const char * w);
		Classic(const Classic & c);
		Classic() {}
		~Classic() {}
		virtual void Report() const;
};

#endif
