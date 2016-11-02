/* ***********************************************************************

  > File Name: string_algo.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年11月02日 星期三 15时23分22秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <deque>
#include <list>
#include <boost/assign.hpp>
#include <boost/algorithm/string.hpp>
#include <boost/format.hpp>
#include <boost/tokenizer.hpp>
//#include <boost/typeof.hpp>

//#include BOOST_TYPEOF_INCREMENT_REGISTRATION_GROUP()

using namespace std;
using namespace boost;

template<typename T>
void print(T &tok)
{
    for (auto pos = tok.begin(); pos != tok.end(); ++pos)
        cout << "[" << *pos << "]";
    cout << endl;
}

int main(int argc, const char* argv[])
{
    //string str("readme.txt");
    //if (ends_with(str, "txt")) {
        //cout << to_upper_copy(str) + " UPPER" << endl;
    //}
    //replace_first(str, "readme", "followme");
    //cout << str << endl;

    //vector<char> v(str.begin(), str.end());
    //vector<char> v2 = to_upper_copy(erase_first_copy(v, "txt"));
    //for (size_t i = 0; i < v2.size(); ++i)
        //cout << v2[i];
    //cout << endl;

    //string str1("Samus"), str2("samus");
    //cout << is_equal()(str1, str2) << endl;
    //cout << is_less()(str1, str2) << endl;

    //format fmt("|%s|\n");

    //string str = "  samus aran   ";
    //cout << fmt % trim_copy(str);
    //cout << fmt % trim_left_copy(str);

    //trim_right(str);
    //cout << fmt % str;

    //string str2 = "2010 Happy new Year!!!";
    //cout << fmt % trim_left_copy_if(str2, is_digit());
    //cout << fmt % trim_right_copy_if(str2, is_punct());
    //cout << fmt % trim_copy_if(str2, is_punct() || is_digit() || is_space());

    //format fmt("|%s|. pos = %d\n");
    //string str = "Long long ago, there was a king.";
    //iterator_range<string::iterator> rge;
    //rge = find_first(str, "long");
    //cout << fmt % rge % (rge.begin() - str.begin());

    //rge = ifind_first(str, "long");
    //cout << fmt % rge % (rge.begin() - str.begin());

    //rge = find_nth(str, "ng", 2);
    //cout << fmt % rge % (rge.begin() - str.begin());

    //rge = find_head(str, 4);
    //cout << fmt % rge % (rge.begin() - str.begin());

    //rge = find_tail(str, 5);
    //cout << fmt % rge % (rge.begin() - str.begin());

    //rge = find_first(str, "samus");

    //string str = "Samus beat the monster.\n";

    //cout << replace_first_copy(str, "Samus", "samus");

    //replace_last(str, "beat", "kill");
    //cout << str;

    //replace_tail(str, 9, "ridley.\n");
    //cout << str;

    //cout << ierase_all_copy(str, "samus");
    //cout << replace_nth_copy(str, "l", 1, "L");
    //cout << erase_tail_copy(str, 8);

    //string str = "Samus,Link.Zelda::Mario-Luigi+zelda";

    //deque<string> d;
    //ifind_all(d, str, "zELDA");
    //for (auto pos = d.begin(); pos != d.end(); ++pos)
        //cout << "[" << *pos << "]";
    //cout << endl;

    //list<iterator_range<string::iterator>> l;
    //split(l, str, is_any_of(",.:-+"));
    //for (auto pos = l.begin(); pos != l.end(); ++pos)
        //cout << "[" << *pos << "]";
    //cout << endl;

    //l.clear();
    //split(l, str, is_any_of(",:-"), token_compress_on);
    //for (auto pos = l.begin(); pos != l.end(); ++pos)
        //cout << "[" << *pos << "]";
    //cout << endl;
    
    //using namespace boost::assign;
    //vector<string> v = list_of("Samus")("Link")("Zelda")("Mario");
    //cout << join(v, "+") << endl;

    //struct is_contains_a
    //{
        //bool operator()(const string &x)
        //{
            //return contains(x, "a");
        //}
    //};
    //cout << join_if(v, "**", is_contains_a());

    //string str("Link raise the master-sword.");

    //tokenizer<> tok(str);
    //for (auto pos = tok.begin(); pos != tok.end(); ++pos)
        //cout << "[" << *pos << "]";
    //cout << endl;

    //char *str = "Link ;; <master-sword> zelda";

    //char_separator<char> sep;
    //tokenizer<char_separator<char>, char*> tok(str, str + strlen(str), sep);
    //print(tok);

    //tok.assign(str, str+strlen(str), char_separator<char>(" ;-", "<>"));
    //print(tok);

    //tok.assign(str, str+strlen(str), char_separator<char>(" ;-<>", "", keep_empty_tokens));
    //print(tok);

    //string str = "id,100,name,\"mario\"";
    //escaped_list_separator<char> sep;
    //tokenizer<escaped_list_separator<char>> tok(str, sep);
    //print(tok);

    string str = "2233344445";
    int offsets[] = {2, 3, 4};
    offset_separator sep(offsets, offsets + 3, true, false);
    tokenizer<offset_separator> tok(str, sep);
    print(tok);

    tok.assign(str, offset_separator(offsets, offsets + 3, false));
    print(tok);

    str += "56667";
    tok.assign(str, offset_separator(offsets, offsets + 3, true, false));
    print(tok);

    return 0;
}

