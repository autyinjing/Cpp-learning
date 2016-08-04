/* ***********************************************************************

  > File Name: refcap.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月04日 星期四 21时30分44秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char* argv[])
{
    int v1 = 42;
    auto f = [v1] () mutable { return ++v1; };
    v1 = 0;
    decltype(f()) j = f();
    cout << j << endl;

    return 0;
}

