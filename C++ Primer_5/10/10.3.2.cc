/* ***********************************************************************

  > File Name: 10.3.2.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月04日 星期四 21时23分58秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, const char* argv[])
{
//    auto f = [](int a, int b) { return a + b; };
 //   cout << f(2, 3) << "\n";
    int a = 2;
    auto f = [a] (int b) { return a + b; };
    cout << f(a) << endl;

    return 0;
}

