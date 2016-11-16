/* ***********************************************************************

  > File Name: bimap.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年11月07日 星期一 16时38分28秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <boost/bimap.hpp>
#include <boost/bimap/unordered_multiset_of.hpp>
#include <boost/assign/list_of.hpp>
#include <boost/assign/list_inserter.hpp>
#include <boost/assign.hpp>
#include "../help/print.cc"

using namespace std;
using namespace boost::bimaps;
using namespace boost;

int main(int argc, const char* argv[])
{
    //bimap<int, string> bm;

    //bm.left.insert(make_pair(1, "111"));
    //bm.left.insert(make_pair(2, "222"));

    //bm.right.insert(make_pair("string", 10));
    //bm.right.insert(make_pair("bimap", 20));

    //print_pair(bm.left);
    //print_pair(bm.right);
    //for (auto pos = bm.left.begin(); pos != bm.left.end(); ++pos)
        //cout << pos->first << ": " << pos->second << endl;
    //for (auto pos = bm.right.begin(); pos != bm.right.end(); ++pos)
        //cout << pos->first << ": " << pos->second << endl;

    //bimap<unordered_multiset_of<int>, unordered_multiset_of<string>> bm;
    //bm.left.insert(make_pair(1, "111"));
    //bm.left.insert(make_pair(2, "222"));
    //bm.left.insert(make_pair(2, "555"));

    //bm.right.insert(make_pair("string", 10));
    //bm.right.insert(make_pair("bimap", 20));
    //bm.right.insert(make_pair("bimap", 2));

    //print_pair(bm.left);
    //print_pair(bm.right);

    //bimap<tagged<int, struct id>, tagged<string, struct name>> bm;

    //bm.by<id>().insert(make_pair(1, "samus"));
    //bm.by<id>().insert(make_pair(2, "adam"));

    //bm.by<name>().insert(make_pair("link", 10));
    //bm.by<name>().insert(make_pair("zelda", 11));
    //assign::insert(bm)
        //(12, "twelve")
        //(13, "thirteen");

    //print_pair(bm.by<id>());
    //print_pair(bm.by<name>());

    typedef bimap<int, string> bm_t;
    
    bm_t bm = assign::list_of<bm_t::relation>(1, "mario")(2, "peach");
    bm.left.insert(bm_t::left_value_type(3, "one"));
    print_pair(bm.left);
    //auto pos = bm.left.find(1);
    //cout << pos->first << ": " << pos->second << endl;
    //bm.left.replace_key(pos, 111);
    //cout << pos->first << ": " << pos->second << endl;
    //bm.left.replace_data(pos, "luigi");
    //cout << pos->first << ": " << pos->second << endl;
    //auto pos2 = bm.right.find("peach");
    //cout << pos2->first << ": " << pos2->second << endl;

    return 0;
}

