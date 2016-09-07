/* ***********************************************************************

  > File Name: newdele.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月18日 星期四 10时44分20秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

vector<int>* create_vector()
{
    return new vector<int>;
}

void delete_vector(vector<int> *vp)
{
    delete vp;
    vp = nullptr;
}

void get_input(vector<int> *vp)
{
    int input;
    while (cin >> input)
    {
        vp->push_back(input);
    }
}

void print(vector<int> *vp)
{
    for (const auto &it : *vp)
        cout << it << endl;
}

int main(int argc, const char* argv[])
{
    auto vp = create_vector();
    get_input(vp);
    print(vp);
    delete_vector(vp);

    return 0;
}

