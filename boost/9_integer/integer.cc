/* ***********************************************************************

  > File Name: integer.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年11月16日 星期三 14时20分32秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <boost/integer_traits.hpp>
#include <boost/cstdint.hpp>
#include <typeinfo>

using namespace std;
using namespace boost;

int main(int argc, const char* argv[])
{
    //cout << integer_traits<int>::const_max << endl;
    //cout << integer_traits<bool>::const_min << endl;
    //cout << integer_traits<long>::is_signed << endl;

    uint8_t u8;
    int_fast16_t i16;
    int_least32_t i32;
    uintmax_t um;

    u8 = 255;
    i16 = 32000;
    i32 = i16;
    um = u8 + i16 + i32;

    cout << typeid(u8).name() << ": " << sizeof(u8) << " v = " << (short)u8 << endl;
    cout << typeid(i16).name() << ": " << sizeof(i16) << " v = " << i16 << endl;
    cout << typeid(i32).name() << ": " << sizeof(i32) << " v = " << i32 << endl;
    cout << typeid(um).name() << ": " << sizeof(um) << " v = " << um << endl;

    return 0;
}

