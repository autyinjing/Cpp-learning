/* ***********************************************************************

  > File Name: mshared.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月18日 星期四 10时04分13秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

int main(int argc, const char* argv[])
{
    shared_ptr<string> p1 = make_shared<string>(10, 'c');
    cout << *p1;

    return 0;
}

