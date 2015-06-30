// =====================================================================================
//
//       Filename:  11.37.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月09日 11时59分51秒
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
#include <algorithm>
#include <map>
#include <unordered_map>
#include <fstream>

using namespace std;

int main(int argc, char *argv[])
{
        unordered_map<string, size_t>   word_count;
        string  word;
        ifstream        in(argv[1]);
        
        while (in >> word)
                ++word_count[word];
        for (const auto &w : word_count)
                cout << w.first << ' ' << w.second << endl;

        return 0;
}
