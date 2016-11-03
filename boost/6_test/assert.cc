/* ***********************************************************************

  > File Name: assert.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年11月03日 星期四 10时40分35秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <boost/format.hpp>

using namespace std;

namespace boost
{
    void assertion_failed(char const* expr, char const* func, char const* file, long line)
    {
        boost::format fmt("\n Assertion failed!\n Expression: %s\n Function: %s\n File: %s\n Line: %ld\n\n");
        fmt % expr % func % file % line;
        cout << fmt;
    }
}

#define BOOST_ENABLE_ASSERT_HANDLER
#include <boost/assert.hpp>
#include <boost/static_assert.hpp>

template<typename T>
T my_min(T a, T b)
{
    BOOST_STATIC_ASSERT(sizeof(T) < sizeof(int));
    return a < b ? a : b;
}

//using namespace boost;

double func(int x)
{
    BOOST_ASSERT(x != 0 && "divided by zero");
    return 1.0 / x;
}

int main(int argc, const char* argv[])
{
    //func(0);

    cout << my_min((short)1, (short)3) << endl;
    cout << my_min(1L, 3L) << endl;

    return 0;
}

