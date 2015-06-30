// =====================================================================================
//
//       Filename:  11.20.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月09日 10时16分16秒
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

using namespace std;

int main(int argc, char *argv[])
{
        map<string, size_t>     word_count;
        ifstream                in(argv[1]);
        string                  word;

        while (in >> word)
        {
      //          auto ret = word_count.insert({word, 1});
        //        if (!ret.second)
          //              ++ret.first->second;
                  ++word_count.insert({word, 0}).first->second;
        }
        for (const auto &val : word_count)
                cout << val.first << ' ' << val.second << endl;

        return 0;
}
