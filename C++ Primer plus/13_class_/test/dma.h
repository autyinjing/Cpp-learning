/*
 * =====================================================================================
 *
 *       Filename:  dma.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月15日 13时08分05秒
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
#include <string>
using namespace std;

class DMA
{
	private:
		string 	label;
		int 	rating;
	public:
		DMA(const string l = "null", int r = 0)//虚基类也有构造函数
		{
			label = l;
			rating = r;
		}
		virtual void test() const {}//只是为了使其称为虚基类
		virtual void test2() { cout << "test2"; }//只有纯虚函数才要求派生类都实现，虚函数不一定要实现
		DMA(const DMA &rs)
		{
			label = rs.label;
			rating = rs.rating;
		}
		virtual ~DMA() {}
		string lab() { return label; }
		int ra() { return rating; }
		friend ostream & operator<<(ostream & os, const DMA & rs)//友元函数不能被继承
		{
			os << "label: " << rs.label << "   rating: " << rs.rating << endl;
			return os;
		}
		virtual void show()
		{
			cout << "label: " << label << "   rating: " << rating << "   " << endl;
		}
};

class baseDMA : public DMA
{
	public:
		baseDMA(const string l = "null", int r = 0) : DMA(l, r) {}
		baseDMA(baseDMA & bd) : DMA(bd.lab(), bd.ra()) {}
		//baseDMA & operator=(const baseDMA & bd) : DMA(bd.lab(),
		//			bd.ra()) {}
		virtual void test() const {} //必须实现虚基类的所有虚函数
		virtual ~baseDMA() {}
		friend ostream & operator<<(ostream &os, const baseDMA &bd)
		{
			os << "This is baseDMA: ";
			os << (DMA &)bd; //通过强制类型转换调用后基类友元函数
			return os;
		}
		virtual void show()
		{
			cout << "This is baseDMA: ";
			DMA::show();
			cout << endl;
		}
};

class lacksDMA : public DMA
{
	private:
		string 	color;
	public:
		lacksDMA(const string c = "blank", const string l = "null",
					int r = 0) : DMA(l, r)
	{
		color = c;
	}
		virtual ~lacksDMA() {}
		virtual void test() const {};
		friend ostream & operator<<(ostream &os, const lacksDMA &ld)
		{
			os << "This is lacksDMA: ";
			os << (DMA &)ld << "  color:" << ld.color;
			return os;
		}
		virtual void show()
		{
			cout << "This is lacksDMA: ";
			DMA::show();
			cout << "   color: " << color;
			cout << endl;
		}
};

class hasDMA : public DMA
{
	private:
		string 	style;
	public:
		hasDMA(const string s = "none", const string l = "null",
					int r = 0) : DMA(l, r)
	{
		style = s;
	}
		virtual ~hasDMA() {}
		virtual void test() const {}
		virtual void show()
		{
			cout << "This is hasDMA: ";
			DMA::show();
			cout << "  style: " << style;
			cout << endl;
		}
		friend ostream & operator<<(ostream & os, const hasDMA &hd)
		{
			os << "This is hasDMA: ";
			os << (DMA &)hd << "  style: " << hd.style;
			return os;
		}
};

#endif
