/* ***********************************************************************

  > File Name: 11.7.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月16日 星期二 13时48分27秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

class family
{
public:
    family();
    ~family() {}
    
    void add_child(string firstname, string lastname);
    void add_family(string firstname, string lastname);
    void print();

private:
    map<string, vector<string>> f;
};

family::family()
{
    f.clear();
}

void family::add_child(string firstname, string lastname)
{
    f[firstname].push_back(lastname);
}

void family::add_family(string firstname, string lastname)
{
    add_child(firstname, lastname);
}

void family::print()
{
    for (auto const& it : f)
    {
        cout << it.first << ": ";
        for (auto const& itt : it.second)
            cout << itt << " ";
        cout << endl;
    }
}

int main(int argc, const char* argv[])
{
    string first, last;
    family fam;

    while (cin >> first >> last)
    {
        fam.add_family(first, last);
    }
    fam.print();

    return 0;
}

