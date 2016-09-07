/* ***********************************************************************

  > File Name: 11.3.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月16日 星期二 11时30分27秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <set>
#include <fstream>

using namespace std;

int main(int argc, const char* argv[])
{
    ifstream ifile(argv[1]);
    map<string, size_t> word_count;
    string word;

    while (ifile >> word)
        ++word_count[word];

    for (auto &it : word_count)
        cout << it.first << ": " << it.second << endl;

    return 0;
}

