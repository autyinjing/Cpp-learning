/* ***********************************************************************

  > File Name: swap.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月04日 星期四 15时05分04秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void print(vector<int> vec)
{
    for (const auto& it : vec)
        cout << it << endl;
}

int main(int argc, const char* argv[])
{
    vector<int> i_vec1{ 1, 2, 3, 4, 5 };
    vector<int> i_vec2{ 5, 4, 3, 2, 1 };

    swap(i_vec1, i_vec2);
    print(i_vec1);
    print(i_vec2);

    return 0;
}

