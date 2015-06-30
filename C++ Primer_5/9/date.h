// =====================================================================================
//
//       Filename:  date.h
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月27日 13时32分15秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#ifndef         DATE_H_
#define         DATE_H_

#include <string>

class Date
{
        private:
                unsigned long   year;
                unsigned long   month;
                unsigned long   day;
        public:
                Date() = default;`
                Date(const string &date);
};

Date::Date(const string &date)
{
        size_t  *p;
        auto    d = stoul(date.substr(date.find_first_of("123456789")), p);
}
