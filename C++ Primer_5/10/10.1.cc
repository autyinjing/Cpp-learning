/* ***********************************************************************

  > File Name: 10.1.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月04日 星期四 18时10分53秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <list>

using namespace std;

int main(int argc, const char* argv[])
{
//    vector<int> i_vec;
//    int help;
    list<string> i_vec;
    string help;

    while (cin >> help && help != "quit")
    {
        i_vec.push_back(help);
    }
    cin >> help;
    cout << count(i_vec.begin(), i_vec.end(), help) << endl;

    return 0;
}

