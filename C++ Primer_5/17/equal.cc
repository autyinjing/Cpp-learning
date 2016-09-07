/* ***********************************************************************

  > File Name: equal.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月18日 星期四 18时12分22秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <tuple>

using namespace std;

int main(int argc, const char* argv[])
{
    tuple<int, int> it(1, 2);
    tuple<int, int> it2(1, 1);

    cout << (it > it2) << endl;

    return 0;
}

