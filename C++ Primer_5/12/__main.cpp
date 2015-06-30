// =====================================================================================
//
//       Filename:  __main.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  10/19/2014 09:02:32 PM
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include "__query.h"

void runQueries(ifstream &);

int main(int argc, char *argv[])
{
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
                string  s;
                if (!(cin >> s) || s == "q")
                        break;
                print(cout, tq.query(s));
        }
}
