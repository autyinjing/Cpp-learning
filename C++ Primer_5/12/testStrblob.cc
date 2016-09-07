/* ***********************************************************************

  > File Name: testStrblob.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月18日 星期四 13时35分24秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include "strblob.hpp"

void read_from_file(StrBlob &sb, ifstream &ifile)
{
    string str;
    while (getline(ifile, str))
        sb.push_back(str);
}

void print_strblob(StrBlob &sb)
{
    for (auto it = sb.begin(); it != sb.end(); it.incr())
        cout << it.deref() << endl;
}

int main(int argc, const char* argv[])
{
    ifstream ifile(argv[1]);
    StrBlob sb;

    read_from_file(sb, ifile);
    print_strblob(sb);
    ifile.close();

    return 0;
}

