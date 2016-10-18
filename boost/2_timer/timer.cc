/* ***********************************************************************

  > File Name: timer.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年10月18日 星期二 16时38分12秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <boost/timer.hpp>
#include <boost/progress.hpp>
//#include <cunistd>
#include <sstream>

using namespace boost;
using namespace std;

int main(int argc, const char* argv[])
{
    //timer t;
    //cout << "max timespan: " << t.elapsed_max() / 3600 << "h" << endl;
    //cout << "min timespan: " << t.elapsed_min() << "s" << endl;
    //cout << "now time elapsed: " << t.elapsed() << "s" << endl;
    stringstream ss;
    {
    progress_timer t(ss);
    //sleep(3);
    for (int i = 0; i < 100000000; ++i);
    }
    cout << ss.str();

    return 0;
}

