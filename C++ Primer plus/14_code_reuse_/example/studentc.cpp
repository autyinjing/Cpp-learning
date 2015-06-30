/*
 * =====================================================================================
 *
 *       Filename:  studentc.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月16日 15时23分43秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include "studentc.h"

double Student::Average() const
{
	if ( scores.size() > 0 )
	      return scores.sum() / scores.size();
	else
	      return 0;
}

const std::string & Student::Name() const
{
	return name;
}

double & Student::operator[](int i)
{
	return scores[i];
}

double Student::operator[](int i) const
{
	return scores[i];
}

std::istream & operator>>(std::istream & is, Student & stu)
{
	is >> stu.name;
	return is;
}

std::istream & getline(std::istream & is, Student & stu)
{
	getline(is, stu.name);
	return is;
}

std::ostream & Student::arr_out(std::ostream & os) const
{
	int 	i;
	int 	lim = scores.size();
	if ( lim > 0 )
	{
		for ( i = 0; i < lim; i++ )
		{
			os << scores[i] << " ";
			if ( i % 5 == 4 )
			      os << std::endl;
		}
		if ( i % 5 != 0 )
		      os << std::endl;
	}
	else
	      os << " empty array ";
	return os;
}

std::ostream & operator<<(std::ostream & os, const Student & stu)
{
	os << "Scores for " << stu.name << ":\n";
	stu.arr_out(os);
	return os;
}
