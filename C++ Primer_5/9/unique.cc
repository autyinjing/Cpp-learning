/* ***********************************************************************

  > File Name: unique.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年10月09日 星期日 15时29分49秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, const char* argv[])
{
    vector<int> v{1,2,2,2,3,3,2,2,1};
    unique(v.begin(), v.end());

    for (auto i : v)
        cout << i << " ";
    cout << endl;

    return 0;
}

