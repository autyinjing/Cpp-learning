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

void get_primers(dynamic_bitset<> &db)
{
    for (dynamic_bitset<>::size_type i = db.find_next(1); 
        i != dynamic_bitset<>::npos; i = db.find_next(i))
    {
        for (auto j = db.find_next(i); j != dynamic_bitset<>::npos; j = db.find_next(j))
        {
            if (j % i == 0)
                db[j] = 0;
        }
    }
}

void print_primers(const dynamic_bitset<> &db)
{
    for (dynamic_bitset<>::size_type i = db.find_next(2);
        i != dynamic_bitset<>::npos;
        i = db.find_next(i))
    {
        cout << i << ", ";
    }
    cout << endl;
}

int main(int argc, const char* argv[])
{
    //dynamic_bitset<> db1;
    //dynamic_bitset<> db2(10);
    //dynamic_bitset<> db3(0x16, BOOST_BINARY(10101));
    //dynamic_bitset<> db4(string("0100"));
    //dynamic_bitset<> db5(db3);

    //dynamic_bitset<> db6;
    //db6 = db4;

    //cout << hex << db5.to_ulong() << endl;
    //cout << db4[0] << db4[1] << db4[2] << endl;

    //dynamic_bitset<> db;
    //db.resize(10, true);
    //cout << db << endl;
    //db.resize(5);
    //cout << db << endl;

    //dynamic_bitset<> db(5, BOOST_BINARY(01110));
    //cout << db << endl;
    //cout << db.size() << endl;
    //db.clear();
    //cout << db.size() << endl;

    //dynamic_bitset<> db(5, BOOST_BINARY(01001));
    //db.append(BOOST_BINARY(101));
    //cout << db << endl;

    //dynamic_bitset<> db1(4, BOOST_BINARY(1010));
    //db1[0] &= 1;
    //db1[1] ^= 1;
    //cout << db1 << endl;
    //dynamic_bitset<> db2(4, BOOST_BINARY(0101));
    //cout << db2 << endl;

    //cout << (db1 ^ db2) << endl;
    //cout << (db1 | db2) << endl;

    //dynamic_bitset<> db(4, BOOST_BINARY(0101));
    //cout << db.test(0) << " " << db.test(1) << endl;
    //cout << db.any() << " " << db.none() << endl;
    //cout << db.count() << endl;

    //dynamic_bitset<> db(4, BOOST_BINARY(0101));
    //cout << db << endl;
    //db.flip();
    //cout << db << endl;

    //db.set();
    //cout << db << endl;

    //db.reset();
    //cout << db << endl;

    //db.set();
    //cout << db << endl;

    //dynamic_bitset<> db(5, BOOST_BINARY(00101));
    //auto pos = db.find_first();
    //cout << pos << endl;
    //pos = db.find_next(pos);
    //cout << pos << endl;

    //dynamic_bitset<> db(10, BOOST_BINARY(1010101));
    ////cout << db.to_ulong() << endl;

    //db.append(10);
    ////cout << db.to_ulong() << endl;
    //db.push_back(1);
    ////cout << db.to_ulong() << endl;
    //string str;
    //to_string(db, str);
    //cout << str << endl;
    //cout << db.size() << endl;
    ////cout << db.count() + db.count(0) << endl;
    //cout << db.num_blocks() << endl;
    //cout << sizeof(unsigned long) << endl;

    //dynamic_bitset<> db1(5, BOOST_BINARY(10101));
    //dynamic_bitset<> db2(5, BOOST_BINARY(10010));

    //cout << (db1 | db2) << endl;
    //cout << (db1 & db2) << endl;
    //cout << (db1 - db2) << endl;

    //dynamic_bitset<> db3(5, BOOST_BINARY(101));
    //cout << db3.is_proper_subset_of(db1) << endl;

    //dynamic_bitset<> db4(db2);
    //cout << db4.is_subset_of(db2) << endl;
    //cout << db4.is_proper_subset_of(db2) << endl;

    int n = 0;
    while (cin >> n)
    {
        dynamic_bitset<> db(n);
        db.set();
        cout << db << endl;
        get_primers(db);
        cout << db << endl;
        print_primers(db);
    }

    return 0;
}

