// =====================================================================================
//
//       Filename:  18.25.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年11月07日 13时02分42秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>

class Base1
{
        public:
                virtual void print() { std::cout << "Base1->print" << std::endl; }
                virtual ~Base1();
};

class Base2
{
        public:
                virtual void print() { std::cout << "Base2->print" << std::endl; }
                virtual ~Base2();
};

class D1 : public Base1 { /*public: ~D1() { std::cout << "~D1()" << std::endl; }*/ };
class D2 : public Base2 { /*public: ~D2() { std::cout << "~D2()" << std::endl; }*/ };
class MI : public D1, public D2 {};

int main()
{
        Base1 *pb1 = new MI;
        Base2 *pb2 = new MI;
        D1 *pd1 = new MI;
        D2 *pd2 = new MI;

        pb1->print();
        pd1->print();
        pd2->print();
//        delete pb2;
  //      delete pd1;
    //    delete pd2;

        return false;
}
