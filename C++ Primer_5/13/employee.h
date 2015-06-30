// =====================================================================================
//
//       Filename:  employee.h
//
//    Description:  
//
//        Version:  1.0
//        Created:  10/18/2014 07:00:09 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#ifndef         EMPLOYEE_H
#define         EMPLOYEE_H

#include <string>
#include <iostream>

class Employee
{
        public:
                Employee() = default;
                Employee(const std::string& n) : name(n), no(++number) { }
                Employee(const Employee& e) : name(e.name), no(++number) { }
                Employee &operator=(const Employee &e);
                ~Employee() = default;
                friend void f(const Employee&);

                static int      number;
        private:
                std::string     name;
                int             no;
};

int Employee::number = 0;

Employee& Employee::operator=(const Employee &e)
{
        name = e.name;
        no = ++number;
        return *this;
}

void f(const Employee &e)
{
        std::cout << e.no << std::endl;
}

#endif
