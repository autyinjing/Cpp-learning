// =====================================================================================
//
//       Filename:  17.28.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年11月03日 18时28分15秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>
#include <random>
        
using namespace std;

int main(int argc, char *argv[])
{
        unsigned get_rand(size_t, unsigned, unsigned);

//        for (int i = 0; i != 10; ++i)
  //              cout << get_rand(32767, 1, 9) << ' ';
    //    cout << endl;
        for (int i = 0; i != 10; ++i)
                cout << get_rand(2147483646, 100, 10000) << ' ';
        cout << endl;

        return false;
}

unsigned get_rand( size_t seed, unsigned min, unsigned max )
{
        static default_random_engine e(seed);
        static uniform_int_distribution<unsigned> u(min, max);

        return u(e);
}
