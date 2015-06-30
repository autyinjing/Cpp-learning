// =====================================================================================
//
//       Filename:  hasptr.h
//
//    Description:  
//
//        Version:  1.0
//        Created:  10/19/2014 01:19:43 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#ifndef         HASPTR_H
#define         HASPTR_H

#include <string>
#include <iostream>

class HasPtr
{
        public:
                friend void swap(HasPtr&, HasPtr&);

                HasPtr(const std::string &s = std::string()) :
                        ps(new std::string(s)), i(0), use(new std::size_t(1)) {}
                //类值版本的拷贝构造函数
                HasPtr(const HasPtr &p) :
                        ps(new std::string(*p.ps)), i(p.i), use(new std::size_t(1)) {}
                HasPtr& operator=(const HasPtr&);
                bool operator<(const HasPtr& p)
                { return *(this->ps) < *p.ps; }
                void print() const { std::cout << *ps << ' ' << i << ' ' << *use << std::endl; }
                ~HasPtr();
        private:
                std::string     *ps;
                int     i;
                std::size_t     *use;   //用来记录有多少个对象共享*ps的成员
};

HasPtr::~HasPtr()
{
        if (--*use == 0)
        {
                delete ps;
                delete use;
        }
}

HasPtr& HasPtr::operator=(const HasPtr& p)
{
        ++*p.use;
        if (--*use == 0)
        {
                delete ps;
                delete use;
        }
        use = p.use;
        ps = p.ps;
        i = p.i;
        return *this;
}

void swap(HasPtr &lhs, HasPtr &rhs)
{
        using std::swap;
        swap(lhs.ps, rhs.ps);
        swap(lhs.i, rhs.i);
        std::cout << "swap in HasPtr\n";
}

#endif
