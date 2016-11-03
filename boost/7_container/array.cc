/* ***********************************************************************

  > File Name: array.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年11月03日 星期四 15时17分42秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <boost/array.hpp>
#include <boost/assign.hpp>
#include "../help/print.cc"

using namespace std;
using namespace boost;

//void xor(unsigned char *buf, int buf_len)
//{
    //ref_array<unsigned char> ra(buf, buf_len);
    //for (auto pos = ra.begin(); pos != ra.end(); ++pos)
        //*pos ^= 0x5a;
//}

int main(int argc, const char* argv[])
{
    //array<int, 10> ar;
    ////ar[0] = 1;
    ////ar.back() = 10;
    ////cout << ar[ar.max_size()-1] << endl;

    //ar.assign(777);
    ////print(ar);

    //int *p = ar.c_array();
    //*(p+5) = 253;
    ////cout << ar[5] << endl;

    //ar.at(8) = 666;
    //sort(ar.begin(), ar.end());
    //print(ar);

    //boost::array<int, 3> arr(assign::list_of(2)(4)(6));
    //print(arr);

    //unsigned char szInt[10];
    //ref_array<unsigned char> ra(szInt, 10);

    //ra.assign(100);
    //ra[0] = 25;
    //cout << ra[0] << endl;

    //xor(ra.c_array(), ra.size());
    //print(ra);

    return 0;
}

