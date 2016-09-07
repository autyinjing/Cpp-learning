/* ***********************************************************************

  > File Name: copy_unique.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月18日 星期四 11时30分31秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

int main(int argc, const char* argv[])
{
    unique_ptr<int> up(new int (10));
    //auto pp(up);
    unique_ptr<int> sp;
    sp.reset(up.release());
    cout << *sp << endl;

    return 0;
}

