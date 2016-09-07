/* ***********************************************************************

  > File Name: 10.28.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月11日 星期四 14时41分05秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <array>
#include <deque>

using namespace std;

int main(int argc, const char* argv[])
{
    vector<int> ivec{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    array<vector<int>, 2> iva;
    deque<int> ide;

    copy(ivec.begin(), ivec.end(), back_inserter(iva[0]));
    copy(ivec.begin(), ivec.end(), front_inserter(ide));
    copy(ivec.begin(), ivec.end(), inserter(iva[1], iva[1].begin()));

    for (auto p : iva)
    {
        for (auto const& it : p)
            cout << it << ' ';
        cout << endl;
    }
    for (auto it : ide)
        cout << it << endl;

    return 0;
}

