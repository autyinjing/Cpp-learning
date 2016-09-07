/* ***********************************************************************

  > File Name: 10.27.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月11日 星期四 14时35分47秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iterator>
#include <list>

using namespace std;

int main(int argc, const char* argv[])
{
    vector<int> ivec{ 1, 1, 3, 3, 3, 4, 1, 3, 2, 2, 2, 2, 2, 5, 22 };
    list<int> ili;

    unique_copy(ivec.begin(), ivec.end(), back_inserter(ili));
    for (auto it : ili)
        cout << it << " ";
    cout << endl;

    return 0;
}

