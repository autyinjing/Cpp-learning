/* ***********************************************************************

  > File Name: tribool.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年11月01日 星期二 21时37分10秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <boost/logic/tribool.hpp>

using namespace std;
using namespace boost;

int main(int argc, const char* argv[])
{
    tribool tb(true);
    tribool tb2(!tb);

    if (tb) {
        cout << "true" << endl;
    }
    tb2 = indeterminate;
    tribool tb3(indeterminate);
    if (tb3) {
        cout << "true" << endl;
    } else if (!tb3) {
        cout << "false" << endl;
    } else if (indeterminate(tb3)) {
        cout << "indeterminate" << endl;
    }
    cout << tb3 << endl;
    cout << (tb2 || true) << endl;
    cout << (tb2 && false) << endl;

    return 0;
}

