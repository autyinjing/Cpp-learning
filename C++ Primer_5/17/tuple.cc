/* ***********************************************************************

  > File Name: tuple.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月18日 星期四 18时03分50秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <tuple>

using namespace std;

int main(int argc, const char* argv[])
{
    tuple<size_t, size_t, size_t> threeID{1, 2, 3};
    auto book = get<0>(threeID);
    ++book;
    cout << book << endl;

    size_t sz = tuple_size<decltype(threeID)>::value;
    tuple_element<1, decltype(threeID)>::type cnt = get<1>(threeID);
    cout << sz << ": " << cnt << endl;

    return 0;
}

