/* ***********************************************************************

  > File Name: 11.16.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月16日 星期二 14时27分43秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main(int argc, const char* argv[])
{
    map<string, int> m;
    string str;
    int i;

    while (cin >> str >> i)
    {
        m[str] = i;
    }

    for (auto it = m.begin(); it != m.end(); ++it)
        it->second += 1;
    for (auto it : m)
        cout << it.first << " " << it.second << endl;

    return 0;
}

