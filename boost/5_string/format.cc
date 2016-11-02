/* ***********************************************************************

  > File Name: format.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年11月02日 星期三 14时47分14秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <boost/format.hpp>
#include <iomanip>

using namespace std;
using boost::io::group;
using namespace boost;

int main(int argc, const char* argv[])
{
    //cout << format("%s:%d+%d=%d\n")%"sum" % 1 % 2 % (1+2);
    
    //format fmt("(%1% + %2%) * %2% = %3%\n");
    //fmt % 2 % 5;
    //fmt % ((2+5)*5);
    //cout << fmt.str();

    //format fmt("%05d\n%-8.3f\n% 10s\n%05X\n");
    //format fmt("%|05d|\n%|-8.3f|\n%| 10s|\n%|05X|\n");
    //cout << fmt %62 % 2.236 % "123456789" % 48;

    format fmt("%1% %2% %3% %2% %1% \n");
    cout << fmt %1 %2 %3;
    fmt.bind_arg(2, 10);
    cout << fmt %1 %3;
    
    fmt.clear();
    cout << fmt % group(showbase, oct, 111) % 333;
    fmt.clear_binds();
    
    fmt.modify_item(1, group(hex, right, showbase, setw(8), setfill('*')));
    cout << fmt % 49 % 20 % 100;

    return 0;
}

