/* ***********************************************************************

  > File Name: itoa.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月11日 星期四 18时22分57秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <numeric>

using namespace std;

void print(int a)
{
    cout << a << '\n';
}

int main(int argc, const char* argv[])
{
    vector<int> ivec(10, 0);
    iota(ivec.begin(), ivec.end(), 0);
    for_each(ivec.begin(), ivec.end(), print);

    return 0;
}

