// =====================================================================================
//
//       Filename:  test.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年11月03日 17时39分10秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>
#include <tuple>
#include <bitset>
#include <string>
#include <random>
#include <ctime>
#include <cmath>
#include <iomanip>

int main(int argc, char *argv[])
{
        using namespace std;

        int     i = -16;
        double  d = 3.14159;

        cout << "i: " << setw(12) << i << "next col" << '\n'
                << "d: " << setw(12) << d << "next col" << '\n';
        cout << left
                << "i: " << setw(12) << i << "next col" << '\n'
                << "d: " << setw(12) << d << "next col" << '\n';
        cout << right
                << "i: " << setw(12) << i << "next col" << '\n'
                << "d: " << setw(12) << d << "next col" << '\n';
        cout << internal
                << "i: " << setw(12) << i << "next col" << '\n'
                << "d: " << setw(12) << d << "next col" << '\n';
        cout << setfill('#')
                << "i: " << setw(12) << i << "next col" << '\n'
                << "d: " << setw(12) << d << "next col" << '\n'
                << setfill(' ');
/*      cout << showpoint << 10.0 << '\n'
                << noshowpoint << 10.0 << endl;
        cout << 100 * sqrt(2.0) << '\n'
                << scientific << 100 * sqrt(2.0) << '\n'
                << fixed << 100 * sqrt(2.0) << '\n'
                << hexfloat << 100 * sqrt(2.0) << '\n'
                << defaultfloat << 100 * sqrt(2.0) << endl;
        cout << cout.precision() << ',' << sqrt(2.0) << endl;
        cout.precision(12);
        cout << cout.precision() << ',' << sqrt(2.0) << endl;
        cout << setprecision(3);
        cout << cout.precision() << ',' << sqrt(2.0) << endl;
        cin >> noskipws;
        char    ch;
        while ((cin >> ch) && (ch != 'q'))
                cout << ch;
        cout << endl;
          cout << true << ' ' << false << endl;
        cout << boolalpha << true << ' ' << false << endl;
        cout << noboolalpha << true << ' ' << false << endl;

        cout << uppercase << showbase;
        cout << 20 << ' ' << 1024 << endl;
        cout << oct << 20 << ' ' << 1024 << endl;
        cout << hex << 20 << ' ' << 1024 << endl;
        cout << dec << 20 << ' ' << 1024 << endl;
        cout << noshowbase << nouppercase;
        cout << 20 << ' ' << 1024 << endl;
        cout << oct << 20 << ' ' << 1024 << endl;
        cout << hex << 20 << ' ' << 1024 << endl;
        cout << dec << 20 << ' ' << 1024 << endl;

          default_random_engine e;
        normal_distribution<> n(4, 1.5);
        vector<unsigned> vals(9);
        for (size_t i = 0; i != 200; ++i)
        {
                unsigned v = lround(n(e));      //舍入到最接近的整数
                if (v < vals.size())            //如果结果在范围内
                        ++vals[v];              //统计每个数出现了多少次
        }
        for (size_t j = 0; j != vals.size(); ++j)
                cout << j << ": " << string(vals[j], '*') << endl;
        default_random_engine e;
        uniform_real_distribution<double> u(0, 1);

        for (size_t i = 0; i < 10; ++i)
                cout << u(e) << " ";
        cout << endl;
        default_random_engine e1(time(0));
        default_random_engine e2(2147483646);
        default_random_engine e3;
        e3.seed(32767);
        default_random_engine e4(time(0));
        for (size_t i = 0; i != 100; ++i)
        {
                if (e1() == e2())
                        cout << "unseeded match at iteration: " << i << endl;
                if (e3() != e4())
                        cout << "seeded differs at iteration: " << i << endl;
        }

        uniform_int_distribution<unsigned> u(0, 9);
        default_random_engine e;
        for (size_t i = 0; i < 10; ++i)
                cout << u(e) << ' ';
        cout << e.min() << ' ' << e.max();
        cout << endl;

        default_random_engine   e;
        for (size_t i = 0; i < 10; ++i)
                cout << e() << ' ';
        cout << endl;

        auto item = make_tuple("0-999-78345-X", 3, 20.00);
        auto book = get<0>(item);
        auto cnt = get<1>(item);
        auto price = get<2>(item)/cnt;
        get<2>(item) *= 0.8;

        typedef decltype(item) trans;

        size_t sz = tuple_size<trans>::value;
        tuple_element<1, trans>::type cntt = get<1>(item);

        cout << book << ' ' << cnt << ' ' << price << ' ' << sz << ' ' << cntt << endl;

        string str{"1111111000000011001101"};
        bitset<32> bitvec1(str, 5, 4);
        bitset<32> bitvec2(str, str.size()-4);

        cout << bitvec1 << '\n' << bitvec2 << endl;

        bitset<32> bitvec(1U);
        bool    is_set = bitvec.any();
        bool    is_not_set = bitvec.none();
        bool    all_set = bitvec.all();
        size_t  onBits = bitvec.count();
        size_t  sz = bitvec.size();
        cout << bitvec << is_set << is_not_set << all_set << '\n' << onBits << '\n' << sz << endl;
        bitvec.flip();
        cout << bitvec << endl;
        bitvec.reset();
        cout << bitvec << endl;
        bitvec.set();
        cout << bitvec << endl;

        bitset<21> bitvec("100000001000010010111");
        cout << bitvec << endl;
        bitvec[0] = 0;
        ~(bitvec[20]);
        bitvec[20].flip();
        cout << bitvec << endl;
*/
        return false;
}
