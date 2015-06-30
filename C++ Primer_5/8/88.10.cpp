// =====================================================================================
//
//       Filename:  88.10.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月25日 19时30分19秒
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
        ifstream        inFile(argv[1]);
        string          fstr;
        vector<string>  svec;

        if (inFile.good())
                while (inFile >> fstr)
                        svec.push_back(fstr);
        for (auto s : svec)
        {
                istringstream   istr(s);
                while (istr >> fstr)
                        cout << fstr << endl;
        }

        return 0;
}
