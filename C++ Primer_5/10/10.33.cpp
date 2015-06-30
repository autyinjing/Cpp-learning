// =====================================================================================
//
//       Filename:  10.33.cpp
//
//    Description:   
//
//        Version:  1.0
//        Created:  2014年10月08日 12时13分51秒
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
#include <list>
#include <deque>
#include <forward_list>
#include <algorithm>
#include <functional>
#include <iterator>
#include <fstream>

using namespace std;
using namespace std::placeholders;

int main(int argc, char *argv[])
{
        ifstream        inFile("number.txt");
        ofstream        evenFile("evenfile.txt"), rowFile("rowfile.txt");
        istream_iterator<int>   in_iter(inFile), eof;
        ostream_iterator<int>   even_iter(evenFile, "\n"), row_iter(rowFile, " ");

        /* while (in_iter != eof)
        {
                if (*in_iter % 2)
                        push_back(*row_iter++, *in_iter++);
                else
                        push_back(*even_iter++, *in_iter++);
        } */
        copy_if(in_iter, eof, row_iter, [](int a) { return a % 2; });
        inFile.close();
        inFile.open("number.txt");
        istream_iterator<int>   in_iter_(inFile), eof_;
        copy_if(in_iter_, eof_, even_iter, [](int a) { return a % 2 == 0; });

        return 0;
}
