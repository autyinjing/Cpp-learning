/* ***********************************************************************

  > File Name: begin.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年10月18日 星期二 17时03分27秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include "../boost_1_62_0/boost/lambda/lambda.hpp"

using namespace std;

int main(int argc, const char* argv[])
{
    using namespace boost::lambda;
    typedef std::istream_iterator<int> in;

    std::for_each(in(std::cin), in(), std::cout << (_1 * 3) << " ");

    return 0;
}

