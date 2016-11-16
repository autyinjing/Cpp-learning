/* ***********************************************************************

  > File Name: variant.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年11月10日 星期四 11时32分20秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <boost/variant.hpp>

using namespace std;
using namespace boost;

int main(int argc, const char* argv[])
{
    typedef variant<int, double, string> var_t;
    var_t v(1);
    cout << v << endl;
    v = 2.13;
    cout << v << endl;
    cout << get<int>(v) << endl;
    //var_t v2("string type");
    //cout << v2 << endl;
    //v2 = v;
    //cout << v2 << endl;

    return 0;
}

