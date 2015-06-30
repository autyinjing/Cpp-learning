// =====================================================================================
//
//       Filename:  sales.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月24日 11时09分01秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include "sales.h"

std::istream &read(std::istream &is, Sales_data &item)
{
        double price = 0;
        is >> item.bookNo >> item.units_sold >> price;
        item.revenue = price * item.units_sold;
        return is;
}

std::ostream &print(std::ostream &os, const Sales_data &item)
{
        os << item.isbn() << " " << item.units_sold << " '
                << item.revenue << " " << item.avg_price();
        return os;
}

Sales_data add(const Sales_data &lhs, const Sales_data &rhs)
{
        Sales_data      sum = lhs;
        sum.combine(rhs);
        return sum;
}
