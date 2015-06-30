// =====================================================================================
//
//       Filename:  tquery_main.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月17日 16时02分01秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================
#include <iostream>
#include "tquery.h"

using std::cout;
using std::cin;

int main(int argc, char *argv[])
{
        void    runQueries(ifstream &infile);
        ifstream        infile(argv[1]);
        runQueries(infile);

        return false;
}

void runQueries(ifstream &infile)
{
        TextQuery       tq(infile);
        while (true)
        {
                cout << "Enter word to look for, or q to quit: ";
                string  s;
                if (!(cin >> s) || s == "q")
                        break;
                print(cout, tq.query(s));
        }
}
