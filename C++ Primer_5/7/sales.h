// =====================================================================================
//
//       Filename:  sales.h
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月24日 11时00分50秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#ifndef         SALES_H_
#define         SALES_H_

#include <iostream>
#include <string>

struct Sales_data
{
        std::string isbn() const { return bookNo; }
        Sales_data &combine(const Sales_data &);
        double avg_price() const;

        std::string     bookNo;
        unsigned        units_sold = 0;
        double          revenue = 0.0;
};

Sales_data add(const Sales_data &, const Sales_data &);
std::ostream &print(std::ostream &, const Sales_data &);
std::istream &read(std::istream &, Sales_data &);

#endif
