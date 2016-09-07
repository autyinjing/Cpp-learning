/* ***********************************************************************

  > File Name: sharvect.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月18日 星期四 11时00分22秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

shared_ptr<vector<int>> create_vector()
{
    return make_shared<vector<int>>();
}

void get_input(shared_ptr<vector<int>> vp)
{
    int i;
    while (cin >> i)
    {
        vp->push_back(i);
    }
}

void print(shared_ptr<vector<int>> vp)
{
    for (const auto& it : *vp)
        cout << it << endl;
}

int main(int argc, const char* argv[])
{
    auto vp = create_vector();
    get_input(vp);
    print(vp);

    return 0;
}

