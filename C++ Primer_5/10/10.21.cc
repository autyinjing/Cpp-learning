/* ***********************************************************************

  > File Name: 10.21.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月04日 星期四 21时43分27秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char* argv[])
{
    int a = 20;
    auto f = [a] () mutable -> bool { while (a > 0) --a; return a == 0; };
    cout << f() << endl;

    return 0;
}

