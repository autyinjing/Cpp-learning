/* ***********************************************************************

  > File Name: quote.hpp
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年09月22日 星期四 11时17分48秒

 ********************************************************************** */

#ifndef QUOTE_HPP
#define QUOTE_HPP

#include <string>
#include <iostream>

using namespace std;

class Quote
{
public:
    Quote() = default;
    Quote(const string &book, double sales_price)
        : bookNo(book), price(sales_price) {  }
    string isbn() const { return bookNo; }
    virtual double net_price(size_t n) const { return n * price; }
    virtual void debug() { cout << "bookNo: " << bookNo << ", price: " << price << endl; }

    virtual ~Quote() = default;

private:
    string bookNo;

protected:
    double price = 0.0;
};

class Bulk_quote : public Quote
{
public:
    Bulk_quote() = default;
    Bulk_quote(const string&, double, size_t, double);
    double net_price(size_t) const override;
    void debug() { Quote::debug(); cout << "min_qty: " << min_qty << ", discount: " << discount << endl; }

private:
    size_t min_qty = 0;
    double discount = 0.0;
};

Bulk_quote::Bulk_quote(const string& book, double p, size_t qty, double disc)
    : Quote(book, p), min_qty(qty), discount(disc) {  }

double Bulk_quote::net_price(size_t cnt) const
{
    if (cnt >= min_qty) {
        return cnt * (1 - discount) * price;
    } else {
        return cnt * price;
    }
}

#endif 
