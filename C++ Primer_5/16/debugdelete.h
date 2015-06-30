// =====================================================================================
//
//       Filename:  debugdelete.h
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年11月03日 14时01分19秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#ifndef         DEBUGDELETE_H
#define         DEBUGDELETE_H

#include <iostream>

class DebugDelete
{
        public:
                DebugDelete(std::ostream &s = std::cerr) : os(s) { }

                template <typename T> void operator()(T *p) const
                { os << "deleting unique_ptr" << std::endl; delete p; }
        private:
                std::ostream &os;
};

#endif
