/* ***********************************************************************

  > File Name: back_insert.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月04日 星期四 18时33分15秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>

using namespace std;

int main(int argc, const char* argv[])
{
    vector<int> vec;
    fill_n(back_inserter(vec), 10, 1);
    for (auto i : vec)
        cout << i << endl;

    return 0;
}

