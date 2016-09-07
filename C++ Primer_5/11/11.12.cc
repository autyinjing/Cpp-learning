/* ***********************************************************************

  > File Name: 11.12.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月16日 星期二 14时11分56秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <utility>

using namespace std;

int main(int argc, const char* argv[])
{
    vector<pair<string, int>> pvec;
    string str;
    int i;

    while (cin >> str >>i)
    {
        pvec.push_back(make_pair(str, i));
    }

    for (auto const& it : pvec)
    {
        cout << it.first << " " << it.second << endl;
    }

    return 0;
}

