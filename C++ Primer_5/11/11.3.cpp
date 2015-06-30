// =====================================================================================
//
//       Filename:  11.3.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月09日 08时26分17秒
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
#include <fstream>
#include <cctype>

using namespace std;

int main(int argc, char *argv[])
{
        map<string, size_t>     word_count;
        ifstream        in(argv[1]);
        //istream_iterator<string>        in_iter(in), eof;
        string          word;
        
        while (in >> word)
        {
                for (auto it = word.begin(); it != word.end(); ++it)
                {
                        *it = tolower(*it);
                        if (ispunct(*it))
                        {
                                word.erase(it);
                                break;
                        }
                }
                ++word_count[word];
        }
        for (const auto &w : word_count)
                cout << w.first << ": " << w.second << " times" << endl;

        return 0;
}
