/* ***********************************************************************

  > File Name: display.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年10月18日 星期二 21时00分08秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <boost/progress.hpp>

using namespace std;

int main(int argc, const char* argv[])
{
    boost::progress_display pd(10);

    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0 ; j < 100000000; ++j);
        pd += 1;
    }

    return 0;
}

