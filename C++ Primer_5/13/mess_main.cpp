// =====================================================================================
//
//       Filename:  mess_main.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  10/20/2014 08:28:00 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include "message.h"

int main(int argc, char *argv[])
{
        Message         m1("hi honey !"), m2("hello aut !");
        Folder          f1, f2;

        m1.save(f1);
        m2.save(f1);
        f1.print();

        auto    m3(m2), m4 = m1;
        m2.remove(f1);
        //m3.save(f2);
        m4.save(f2);
        f1.print();
        f2.print();

        return false;
}
