/* ***********************************************************************

  > File Name: word_count.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月16日 星期二 14时47分58秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <fstream>

using namespace std;

int main(int argc, const char* argv[])
{
    map<string, size_t> word_count;
    string word;
    ifstream ifile(argv[1]);

    while (ifile >> word)
    {
        auto ret = word_count.insert({word, 1});
        if (!ret.second)
            ++ret.first->second;
    }
    for (auto const &it : word_count)
    {
        cout << it.first << ": " << it.second << endl;
    }

    return 0;
}

