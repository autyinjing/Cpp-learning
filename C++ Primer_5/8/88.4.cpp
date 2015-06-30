// =====================================================================================
//
//       Filename:  88.4.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月25日 19时13分43秒
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
#include <fstream>

int main(int argc, char *argv[])
{
        using namespace std;
        ifstream        inFile(argv[1], ifstream::in);
        vector<string>  svec;
        string          str;

        if (inFile.good())
                while (getline(inFile, str)/* inFile >> str */)
                        svec.push_back(str);
        for (auto s : svec)
                cout << s << endl;

        return 0;
}
