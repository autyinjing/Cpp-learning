/* ***********************************************************************

  > File Name: minmax_element.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年11月16日 星期三 11时45分07秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
//#include <algorithm>
#include <boost/algorithm/minmax_element.hpp>

using namespace std;
using namespace boost;

int main(int argc, const char* argv[])
{
    vector<int> v = {3,9,1,4,2,5,9,3,3,3,9,1,2};

    auto result = boost::minmax_element(v.begin(), v.end());
    //auto result = last_min_first_max_element(v.begin(), v.end());
    cout << (result.first - v.begin()) << ": " << *result.first << endl;
    cout << (result.second - v.begin()) << ": " << *result.second << endl;

    result = first_min_first_max_element(v.begin(), v.end());
    cout << (result.first - v.begin()) << ": " << *result.first << endl;
    cout << (result.second - v.begin()) << ": " << *result.second << endl;
    
    result = last_min_first_max_element(v.begin(), v.end());
    cout << (result.first - v.begin()) << ": " << *result.first << endl;
    cout << (result.second - v.begin()) << ": " << *result.second << endl;
    
    result = last_min_last_max_element(v.begin(), v.end());
    cout << (result.first - v.begin()) << ": " << *result.first << endl;
    cout << (result.second - v.begin()) << ": " << *result.second << endl;

    return 0;
}

