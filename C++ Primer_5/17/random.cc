/* ***********************************************************************

  > File Name: random.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年10月17日 星期一 17时09分22秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <random>

using namespace std;

void get_random(vector<int> &i_vec)
{
    static default_random_engine e;
    static uniform_int_distribution<int> u(0,9);
    for (size_t i = 0; i < 10; ++i)
        i_vec.push_back(u(e));
}

void get_random2(vector<int> &i_vec, int seed = 0)
{
    default_random_engine e(seed);
    uniform_int_distribution<int> u(0,9);
    for (size_t i = 0; i < 10; ++i)
        i_vec.push_back(u(e));
}

int main(int argc, const char* argv[])
{
    vector<int> v1, v2;
    //get_random(v1);
    //get_random(v2);
    auto fun = [](vector<int> vec) { for (auto it : vec) cout << it << " "; cout << endl; };
    //fun(v1);
    //fun(v2);

    get_random2(v1, 32767);
    get_random2(v2, 32768);
    fun(v1);
    fun(v2);

    return 0;
}

