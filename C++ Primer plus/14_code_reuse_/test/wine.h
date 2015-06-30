/*
 * =====================================================================================
 *
 *       Filename:  wine.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月19日 15时44分38秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#ifndef 	WINE_H_
#define 	WINE_H_

#include <iostream>
#include <string>
#include <valarray>

using std::cout;
using std::endl;
using std::string;
using std::cin;

template <class T1, class T2>
class Pair
{
	private:
		T1 	a;
		T2 	b;
	public:
		T1 & first();
		T2 & second();
		T1 first() const { return a; }
		T2 second() const { return b; }
		Pair(const T1 & aval, const T2 & bval) : a(aval), b(bval) {}
		Pair() {}
};

template <class T1, class T2>
T1 & Pair<T1, T2>::first()
{
	return a;
}

template <class T1, class T2>
T2 & Pair<T1, T2>::second()
{
	return b;
}

class Wine
{
	private:
		typedef std::valarray<int> ArrayInt;
		typedef Pair<ArrayInt, ArrayInt> PairArray;
		string 		name;
		PairArray 	year;
		int 		yrnum;
	public:
		Wine(const char * l, int y, const int yr[], const int bot[]) : name(l), year(yr, bot), yrnum(y) {}
		Wine(const char * l, int y) : name(l), yrnum(y), year(nullptr, nullptr) {}
		void GetBottles();
		const string & Label() { return name; }
		void sum() { return year.b.sum(); }
		void Show();
};

void Wine::GetBottles()
{
	for ( int i = 0; i < yrnum; ++i )
	{
		cout << "Enter the year: ";
		cin >> year.a[i];
		cout << "Enter the bottle: ";
		cin >> year.b[i];
	}
}

void Wine::Show()
{
	cout << "Wine: " << name << endl;
	cout << " 	Year 	Bottles\n";
	for ( int i = 0; i < yrnum; ++i )
	      cout << " 	" << year.a[i] << " 	" << year.b[i] << endl;
}

#endif
