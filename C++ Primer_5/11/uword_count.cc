/* ***********************************************************************

  > File Name: uword_count.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月16日 星期二 15时44分46秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

int main(int argc, const char* argv[])
{
    unordered_map<string, size_t> word_count;
    string word;
    while (cin >> word)
        ++word_count[word];
    for (const auto& it : word_count)
        cout << it.first << ": " << it.second << endl;

    return 0;
}

