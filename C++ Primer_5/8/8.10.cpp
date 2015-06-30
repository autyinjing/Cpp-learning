// =====================================================================================
//
//       Filename:  8.10.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月25日 17时08分15秒
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
#include <fstream>

int main(int argc, char *argv[])
{
        using namespace std;
        vector<string>  svec;
        ifstream        inFile(argv[1]);
        string          str;
        
        while (getline(inFile, str))
                svec.push_back(str);
        for (auto s : svec)
        {
                istringstream   istr(s);
                while (istr >> str)
                        cout << str << endl;
        }
        inFile.close();

        return 0;
}
