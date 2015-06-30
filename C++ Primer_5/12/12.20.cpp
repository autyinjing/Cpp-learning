// =====================================================================================
//
//       Filename:  12.20.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月10日 12时14分41秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <memory>
#include <fstream>
#include "cblob.h"

using namespace std;

int main(int argc, char *argv[])
{
        ifstream        in(argv[1]);
        string          line;
        StrBlob         sb;

        while (getline(in, line))
                sb.push_back(line);
        cout << "Empty ? " << sb.empty() << " Lines: " << sb.size() << endl;

        auto    beg = sb.begin();
        while (!beg.is_end())
        {
                cout << beg.deref() << endl;
                beg = beg.incr();
        }

        return 0;
}
