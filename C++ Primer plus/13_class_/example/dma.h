/*
 * =====================================================================================
 *
 *       Filename:  dma.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月14日 22时17分15秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	DMA_H_
#define 	DMA_H_

#include <iostream>

class baseDMA
{
	private:
		char 	* label;
		int 	rating;
	public:
		baseDMA(const char * l = "null", int r = 0);
		baseDMA(const baseDMA & rs);
		virtual ~baseDMA();
		baseDMA & operator=(const baseDMA & rs);
		friend std::ostream & operator<<(std::ostream & os,
					const baseDMA & rs);
};

class lacksDMA : public baseDMA
{
	private:
		enum { COL_LEN = 40 };
		char color[COL_LEN];
	public:
		lacksDMA(const char * c = "blank", const char * l = "null",
					int r = 0);
		lacksDMA(const char * c, const baseDMA & rs);
		friend std::ostream & operator<<(std::ostream & os,
					const lacksDMA & rs);
};

class hasDMA : public baseDMA
{
	private:
		char * style;
	public:
		hasDMA(const char * s = "none", const char * l = "null",
					int r = 0);
		hasDMA(const char * s, const baseDMA & rs);
		hasDMA(const hasDMA & hs);
		~hasDMA();
		hasDMA & operator=(const hasDMA & rs);
		friend std::ostream & operator<<(std::ostream & os,
					const hasDMA & rs);
};

#endif
