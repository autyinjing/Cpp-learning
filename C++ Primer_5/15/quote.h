// =====================================================================================
//
//       Filename:  quote.h
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月29日 09时37分01秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#ifndef         QUOTE_H
#define         QUOTE_H

#include <string>
#include <iostream>

class Quote
{
        public:
                Quote() = default;
                Quote(const std::string &book, double p) :
                        bookNo(book), price(p) { }
                std::string isbn() const { return bookNo; }

                virtual double net_price(std::size_t n) const
                { return n * price; }
                virtual void debug() const 
                { std::cout << bookNo << " " << price << std::endl; }
                virtual ~Quote() = default;     //对析构函数进行动态绑定
        private:
                std::string     bookNo;
        protected:
                double          price = 0.0;    //代表普通状态下不打折的价格
};

class Disc_quote : public Quote
{
        public:
                Disc_quote() = default;
                Disc_quote(const std::string &book, double p, std::size_t n, double dis)
                                : Quote(book, p), quantity(n), discount(dis) { }
                double net_price(std::size_t) const = 0;
        protected:
                std::size_t     quantity = 0;
                double          discount = 0.0;
};

/*
class Bulk_quote : public Quote
{
        public:
                Bulk_quote() = default;
                Bulk_quote(const std::string&, double, std::size_t, double);
                void debug() const
                { std::cout << min_qty << " " << discount << std::endl; }
                double net_price(std::size_t) const override;   //覆盖基类的版本
        private:
                std::size_t     min_qty = 0;    //适用折扣政策的最小购买量
                double          discount = 0.0; //以小数表示的折扣额
};
*/

class Bulk_quote : public Disc_quote
{
        public:
                Bulk_quote() = default;
                Bule_quote(const std::string &book, double price,
                                std::size_t qty, double disc)
                        : Disc_quote(book, price, qty, disc) { }
                double net_price(std::size_t) const override;
};

//成员函数定义
using std::size_t;
using std::string;
using std::ostream;
using std::endl;

//Bulk_quote::Bulk_quote(const string &book, double p, size_t cnt, double dis)
  //              : Quote(book, p), min_qty(cnt), discount(dis) { }

/* double Bulk_quote::net_price(size_t cnt) const
{
        if (cnt >= min_qty)
                return cnt * (1 - discount) * price;
        else
                return cnt * price;
}
*/

double Bulk_quote::net_price(size_t cnt) const
{
        if (cnt > quantity)
                return quantity * price + (cnt - quantity) * (1 - discount) * price;
        else
                return cnt * price * (1 - discount);
}

double print_total(ostream &os, const Quote &item, size_t n)
{
        item.debug();
        double  ret = item.net_price(n);
        os << "ISBN: " << item.isbn()
                << " # sold: " << n << " total due: " << ret << endl;
        return ret;
}

#endif
