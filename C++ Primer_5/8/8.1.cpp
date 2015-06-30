// =====================================================================================
//
//       Filename:  8.1.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月25日 16时01分25秒
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

int main()
{
        istream &input(istream &is);
        //input(cin);
        istringstream   istr("i am a student!\n");
        input(istr);

        return 0;
}

istream &input(istream &is)
{
        //int     ival;
        string  str;
        cout << is.good() << endl;
        while (is >> str)
                cout << str << endl;
        cout << is.good() << endl;
        is.clear();
        cout << is.good() << endl;
        return is;
}
