/* ***********************************************************************

  > File Name: test.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年11月03日 星期四 11时23分51秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

//#define BOOST_TEST_MAIN
//#define BOOST_TEST_INCLUDED
#include <boost/test/minimal.hpp>
#include <boost/format.hpp>

//#include <boost/test/included/unit_test.hpp>

using namespace std;
using namespace boost;

int test_main(int argc, char* argv[])
{
    format fmt("%d-%d");

    BOOST_CHECK(fmt.size() != 0);
    fmt % 12 % 34;
    BOOST_REQUIRE(fmt.str() == "12-34");

    BOOST_ERROR("演示一条错误信息");

    fmt.clear();
    fmt % 12;
    try {
        cout << fmt;
    } catch (...) {
        BOOST_FAIL("致命错误， 测试终止");
    }

    return 0;
}

