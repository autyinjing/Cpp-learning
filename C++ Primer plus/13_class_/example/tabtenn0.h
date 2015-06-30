/*
 * =====================================================================================
 *
 *       Filename:  tabtenn0.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月14日 15时48分05秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	TABTENN0_H_
#define 	TABTENN0_H_

#include <string>
using std::string;

class TableTennisPlayer
{
	private:
		string 	firstname;
		string 	lastname;
		bool 	hasTable;
	public:
		TableTennisPlayer(const string & fn = "none",
			const string & ln = "none", bool ht = false);
		void Name() const;
		bool HasTable() const { return hasTable; }
		void ResetTable(bool v) { hasTable = v; }
};

class RatedPlayer : public TableTennisPlayer
{
	private:
		unsigned int 	rating;
	public:
		RatedPlayer(unsigned int r = 0, const string & fn = "none",
			const string & ln = "none", bool ht = false);
		RatedPlayer(unsigned int r, const TableTennisPlayer & tp);
		unsigned int Rating() const { return rating; }
		void ResetRating(unsigned int r) {rating = r;}
};

#endif
