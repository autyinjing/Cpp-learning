/* ***********************************************************************

  > File Name: noncopyable.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年10月31日 星期一 16时48分40秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <boost/utility.hpp>

using namespace std;
using namespace boost;

class do_not_copy : boost::noncopyable {};

int main(int argc, const char* argv[])
{
    do_not_copy d1;
    //do_not_copy d2(d1);

    return 0;
}

