// =====================================================================================
//
//       Filename:  13.27.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  10/18/2014 09:46:09 PM
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

class HasPtr
{
        public:
                HasPtr(const std::string &s = std::string()) :
                        ps(new std::string(s)), i(0), use(new std::size_t(1)) { }
                HasPtr(const HasPtr &p) :
                        ps(p.ps), i(p.i), use(p.use) { ++*use; }
                HasPtr& operator=(const HasPtr&);
                ~HasPtr();
        private:
                std::string     *ps;
                int     i;
                std::size_t     *use;
};

HasPtr::~HasPtr()
{
        if (--*use == 0)
        {
                delete ps;
                delete use;
        }
}

HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
        ++*rhs.use;
        if (--*use == 0)
        {
                delete ps;
                delete use;
        }
        ps = rhs.ps;
        i = rhs.i;
        use = rhs.use;
        return *this;
}

#endif
