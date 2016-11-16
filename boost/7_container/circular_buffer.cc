/* ***********************************************************************

  > File Name: circular_buffer.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年11月09日 星期三 17时02分00秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <boost/circular_buffer.hpp>
#include <boost/assign.hpp>
#include "../help/print.cc"

using namespace std;
using namespace boost;

int main(int argc, const char* argv[])
{
    //circular_buffer<int> cb(5);

    //cb.push_back(1);
    //cb.push_front(2);
    //cb.insert(cb.begin(), 3);
    
    //print(cb);

    //cb.pop_front();
    ////cb.push_back();
    //cout << cb.size() << endl;

    using namespace boost::assign;

    circular_buffer<int> cb(3);
    cb.push_back(1);
    cb.push_back(2);
    cb.push_back(3);
    print(cb);

    cb.push_back(4);
    print(cb);

    cb.pop_front();
    print(cb);

    return 0;
}

