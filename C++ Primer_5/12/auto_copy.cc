/* ***********************************************************************

  > File Name: auto_copy.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月18日 星期四 10时07分22秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

int main(int argc, const char* argv[])
{
    auto p = make_shared<string>("hello world!\n");
    auto q(p);
    auto pq = q;
    cout << p << ": " << *p;
    cout << q << ": " << *q;
    cout << pq << ": " << *pq;

    return 0;
}

