/* ***********************************************************************

  > File Name: lexical_cast.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年11月02日 星期三 14时29分38秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <boost/lexical_cast.hpp>

using namespace std;
using namespace boost;

template<typename T>
bool num_valid(const char *str)
{
    try {
        lexical_cast<T>(str);
        return true;
    } catch (bad_lexical_cast& e) {
        cout << e.what() << endl;
        return false;
    };
}

int main(int argc, const char* argv[])
{
    //int x = lexical_cast<int>("100");
    //double e = lexical_cast<double>("2.71828");
    //string str = lexical_cast<string>(0.618);
    //cout << x << " " << e << " "  << str << endl;

    if (!num_valid<int>("3.1415926")) {
        cout << "Trans failed!" << endl;
    }

    return 0;
}

