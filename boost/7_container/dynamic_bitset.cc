/* ***********************************************************************

  > File Name: dynamic_bitset.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年11月03日 星期四 16时01分21秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <boost/dynamic_bitset.hpp>
#include <boost/utility.hpp>

using namespace std;
using namespace boost;

int main(int argc, const char* argv[])
{
    dynamic_bitset<> db1;
    dynamic_bitset<> db2(10);
    dynamic_bitset<> db3(0x16, BOOST_BINARY(10101));
    dynamic_bitset<> db4(string("0100"));
    dynamic_bitset<> db5(db3);

    dynamic_bitset<> db6;
    db6 = db4;

    cout << hex << db5.to_ulong() << endl;
    cout << db4[0] << db4[1] << db4[2] << endl;

    return 0;
}

