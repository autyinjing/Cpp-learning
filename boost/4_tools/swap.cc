/* ***********************************************************************

  > File Name: swap.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年11月01日 星期二 20时52分46秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <boost/swap.hpp>

using namespace std;
using namespace boost;

class point
{
public:
    void swap(point &p) { cout << "inner swap" << endl; }
};

namespace std
{
    template<>
        void swap(point &x, point &y) { x.swap(y); }
}

int main(int argc, const char* argv[])
{ 
    point a, b;
    std::swap(a, b);
    boost::swap(a, b);

    return 0;
}

