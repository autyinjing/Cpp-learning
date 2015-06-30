// =====================================================================================
//
//       Filename:  18.16.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年11月04日 15时20分44秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

namespace Exercise
{
        int     ivar = 0;
        double  dvar = 0;
        const int       limit = 1000;
}

int ivar = 0;

using Exercise::ivar;
using Exercise::dvar;
using Exercise::limit;

void manip()
{
//        using Exercise::ivar;
//        using Exercise::dvar;
//        using Exercise::limit;
        double  dvar = 3.1416;
        int     iobj = limit + 1;
        ++ivar;
        ++::ivar;
}

int main()
{
        return 0;
}
