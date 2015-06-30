/*
 * =====================================================================================
 *
 *       Filename:  studentc.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月16日 15时15分14秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	STUDENTC_H_
#define 	STUDENTC_H_

#include <iostream>
#include <string>
#include <valarray>

class Student
{
	private:
		typedef std::valarray<double> 	ArrayDb;
		std::string 	name;
		ArrayDb 	scores;
		std::ostream & arr_out(std::ostream & os) const;
	public:
		Student() : name("Null Student"), scores() {}
		explicit Student(const std::string & s)
			: name(s), scores() {}
		explicit Student(int n) : name("Nully"), scores(n) {}
		Student(const std::string & s, int n)
			: name(s), scores(n) {}
		Student(const std::string & s, const ArrayDb & a)
			: name(s), scores(a) {}
		Student(const char * str, const double * pd, int n)
			: name(str), scores(pd, n) {}
		~Student() {}
		double Average() const;
		const std::string & Name() const;
		double & operator[](int i);
		double operator[](int i) const;
		friend std::istream & operator>>(std::istream & is,
					Student & stu);
		friend std::istream & getline(std::istream & is,
					Student & stu);
		friend std::ostream & operator<<(std::ostream & os,
					const Student & stu);
};

#endif
