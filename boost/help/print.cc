/* ***********************************************************************

  > File Name: print.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年11月01日 星期二 18时17分03秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;
using namespace boost;

template<typename T>
void print(const T& t)
{
    for (auto it : t)
        cout << it << endl;
}

template<typename T>
void print_pair(const T& t)
{
    for (auto it : t)
        cout << it.first << ": " << it.second << endl;
}
