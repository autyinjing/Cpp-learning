// =====================================================================================
//
//       Filename:  88.1.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月25日 19时06分30秒
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
#include <cctype>
#include <sstream>

using namespace std;

int main(int argc, char *argv[])
{
        istream &input(istream &is);
        istringstream   istr("i am a student!\n");
        input(istr);

        return 0;
}

istream &input(istream &is)
{
        //int     ival;
        string  str;

        cout << is.eof() << is.fail() << is.bad() << is.good() << endl;
        while (is >> str)
                cout << str << endl;
        cout << is.eof() << is.fail() << is.bad() << is.good() << endl;
        is.clear();
        cout << is.eof() << is.fail() << is.bad() << is.good() << endl;
        return is;
}
