/* ***********************************************************************

  > File Name: unit_test.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年11月03日 星期四 14时23分13秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <memory>

#define BOOST_TEST_INCLUDED
#include <boost/test/unit_test.hpp>

using namespace std;
using namespace boost;

BOOST_AUTO_TEST_SUITE(s_smart_ptr)

    BOOST_AUTO_TEST_CASE(t_scoped_ptr)
{
    std::shared_ptr<int> p(new int(874));
    BOOST_CHECK(p);
    BOOST_CHECK_EQUAL(*p, 874);

    p.reset();
    BOOST_CHECK(p == 0);
}

BOOST_AUTO_TEST_SUITE_END()

//int main(int argc, const char* argv[])
//{

    //return 0;
//}

