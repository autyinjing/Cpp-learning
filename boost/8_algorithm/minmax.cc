/* ***********************************************************************

  > File Name: minmax.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年11月10日 星期四 18时13分15秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <boost/algorithm/minmax.hpp>

using namespace std;
using namespace boost;

struct Comp
{
    bool operator()(const string &a, const string &b)
    {
        return (b.find("BOSS") != string::npos);
    }
};

int main(int argc, const char* argv[])
{
    //cout << std::max(200, 12) << endl;
    //cout << std::min(200, 12) << endl;

    //auto x = std::minmax(1, 2);
    //cout << x.first << " " << x.second << endl;

    string s1("5000"), s2("123BOSS");
    auto x = std::minmax(s1, s2);
    cout << x.first << " " << x.second << endl;
    //auto comp = Comp();
    auto y = std::minmax(s1, s2, Comp());
    cout << y.first << " " << y.second << endl;

    return 0;
}
