// =====================================================================================
//
//       Filename:  main.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月16日 11时51分40秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>
#include <fstream>
#include "query.h"

void runQueries(ifstream &infile);

int main(int argc, char *argv[])
{
        ifstream        infile(argv[1]);
        
        runQueries(infile);

        return false;
}

void runQueries(ifstream &infile)
{
        using std::cout;
        using std::cin;
        TextQuery       tq(infile);
        while (true)
        {
                cout << "enter word to look for, or q to quit: ";
                string  s;
                if (!(cin >> s) || s == "q")
                        break;
                auto    result = tq.query(s);
                result.print(cout);
        }
}
