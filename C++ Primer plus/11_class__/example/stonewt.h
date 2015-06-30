/*
 * =====================================================================================
 *
 *       Filename:  stonewt.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月10日 21时44分34秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	STONEWT_H_
#define 	STONEWT_H_

class Stonewt
{
	private:
		enum { Lbs_per_stn = 14 };
		int 	stone;
		double 	pds_left;
		double 	pounds;
	public:
		Stonewt( double lbs );
		Stonewt( int stn, double lbs );
		Stonewt();
		~Stonewt();
		void 	show_lbs() const;
		void 	show_stn() const;
};

#endif
