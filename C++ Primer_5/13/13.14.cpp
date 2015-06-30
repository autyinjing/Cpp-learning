// =====================================================================================
//
//       Filename:  13.14.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  10/18/2014 05:20:52 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>

using namespace std;

int     no = 1;

class   numbered
{
        public:
                numbered() : mysn(no++) { }
                numbered(const numbered &n) : mysn(no++) { }
                int             mysn;
};

int main(int argc, char *argv[])
{
        void    f(const numbered&);
        numbered        a, b = a, c = b;
        f(a);
        f(b);
        f(c);

        return false;
}

void f(const numbered &n)
{
                cout << n.mysn << endl;
}
