/* ***********************************************************************

  > File Name: 11.23.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月16日 星期二 14时59分48秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <utility>

using namespace std;

int main(int argc, const char* argv[])
{
    multimap<string, vector<string>> mmap;
    string first, last;

    while (cin >> first >> last)
    {
        vector<string> vec{last};
        mmap.insert(make_pair(first, vec));
    }
    for (auto const &it : mmap)
    {
        cout << it.first << ": ";
        for (auto const &itt : it.second)
            cout << itt << " ";
        cout << endl;
    }

    return 0;
}

