// =====================================================================================
//
//       Filename:  _main.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月17日 17时30分24秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>
#include "_query.h"

using std::cin;
using std::cout;

int main(int argc, char *argv[])
{
        void    runQueries(ifstream &);
        ifstream        infile(argv[1]);
        runQueries(infile);

        return false;
}

void runQueries(ifstream &infile)
{
        TextQuery       tq(infile);

        while (true)
        {
                cout << "enter word to look for, or q to quit: ";
                string  input;
                if (!(cin >> input) || input == "q")
                        break;
                cout << tq.query(input).get_file()->size() << endl;
                print(cout, tq.query(input));
        }
}
