// =====================================================================================
//
//       Filename:  person.h
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月24日 10时33分21秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#ifndef         PERSON_H_
#define         PERSON_H_

#include <string>

struct Person
{
        using std::string;
        Person() = default;
        Person(const string &name = "nobody", const string &addr = "naddr");
        const string &get_name() const { return name; }
        const string &get_addr() const { return addr; }
        string     name;
        string     addr;
}

Person::Person(const string &na, const string &ad) : name(na), addr(ad) {}

std::istream &read(std::istream &is, Person &item)
{
        is >> item.name >> item.addr;
        return is;
}

std::ostream &print(std::ostream &os, const Person &item)
{
        os << "name: " << item.name
               << "addr: "<< item.addr;
        return os;
}

#endif
