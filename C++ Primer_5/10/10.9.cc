/* ***********************************************************************

  > File Name: 10.9.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月04日 星期四 18时40分50秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

void print(const vector<string>& vec)
{
    for (const auto& it : vec)
        cout << it << " ";
    cout << endl;
}

void elimDups(vector<string>& str_vec)
{
    print(str_vec);
    sort(str_vec.begin(), str_vec.end());
//    print(str_vec);
    auto end_uni = unique(str_vec.begin(), str_vec.end());
//    print(str_vec);
    str_vec.erase(end_uni, str_vec.end());
    print(str_vec);
}

bool isShorter(const string& s1, const string& s2)
{
    return s1.size() < s2.size();
}

bool isGreator5(const string& s)
{
    return s.size() >= 4;
}

int main(int argc, const char* argv[])
{
    vector<string> str_vec{ "fox", "jumps", "red", "the", "over", "quick", "red", "slow", "the", "turtle" };
 //   elimDups(str_vec);
//    stable_sort(str_vec.begin(), str_vec.end(), isShorter);
    partition(str_vec.begin(), str_vec.end(), isGreator5);
    print(str_vec);
    cout << count_if(str_vec.begin(), str_vec.end(), isGreator5) << endl;

    return 0;
}

