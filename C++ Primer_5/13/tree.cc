/* ***********************************************************************

  > File Name: tree.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年09月08日 星期四 15时45分33秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <stack>

using namespace std;

struct Tree
{
    int data;
    Tree *left, *right;
    Tree(int d) : data(d), left(nullptr), right(nullptr) {}
};

int func(Tree *t)
{
    int sum = 0, m = 0;
    stack<Tree*> t_sta;
    stack<int> i_sta;
    auto help = t;

    while (help != nullptr || !t_sta.empty())
    {
        while (help != nullptr)
        {
            m = m * 10 + help->data;
            t_sta.push(help);
            i_sta.push(m);
            help = help->left;
        }
        if (!t_sta.empty())
        {
            help = t_sta.top();
            t_sta.pop();
            if (help->left == NULL && help->right == NULL)
                sum += m;
            m = i_sta.top();
            i_sta.pop();
            while (!t_sta.empty() && help->right == nullptr)
            {
                m = i_sta.top();
                i_sta.pop();
                help = t_sta.top();
                t_sta.pop();
            }
            if (t_sta.empty() && help->right == nullptr)
                return sum;
            help = help->right;
        }
    }

    return sum;
}

int main(int argc, const char* argv[])
{
//    int a[3][2] = {1,2,3,4,5,6};
//    cout << *(*a+3) << " " << *(*(a+1)) << endl;
    vector<Tree> t_vec;
    t_vec.push_back(Tree(3));
    t_vec.push_back(Tree(1));
    t_vec.push_back(Tree(2));
    t_vec.push_back(Tree(0));
    t_vec.push_back(Tree(4));
    t_vec.push_back(Tree(5));
    t_vec.push_back(Tree(1));
    t_vec.push_back(Tree(9));
    t_vec.push_back(Tree(3));

//    t_vec[0].left = &t_vec[1];
//    t_vec[0].right = &t_vec[2];
//    t_vec[1].left = &t_vec[3];
//    t_vec[1].right = &t_vec[4];
//    t_vec[2].right = &t_vec[5];
//    t_vec[3].left = &t_vec[6];
//    t_vec[3].right = &t_vec[7];
//    t_vec[5].left = &t_vec[8];

    auto sum = func(&t_vec[0]);
    cout << sum << endl;

    for (auto it : t_vec)
        cout << it.data << endl;

    return 0;
}

