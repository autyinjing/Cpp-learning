// =====================================================================================
//
//       Filename:  8.4.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月25日 16时36分42秒
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
        ifstream        inFile(argv[1]);
        vector<string>  svec;
        string          str;

        if (inFile)
                while (inFile >> str/* getline(inFile, str) */)
                        svec.push_back(str);
        else
                cout << "Open error!\n";
        for (auto s : svec)
                cout << s << endl;

        return 0;
}
