/* ***********************************************************************

  > File Name: 9.50.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月04日 星期四 16时29分32秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char* argv[])
{
    string help;
    vector<string> s_vec;
    double sum = 0;

    while (cin >> help && help != "quit")
    {
        s_vec.push_back(help);
    }
    for (const auto& it : s_vec)
    {
        cout << it << endl;
        sum += stod(it);
    }
    cout << sum << endl;

    return 0;
}

