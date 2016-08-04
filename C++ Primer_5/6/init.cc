/* ***********************************************************************

  > File Name: init.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月03日 星期三 18时01分15秒

 ********************************************************************** */

#include <iostream>
#include <initializer_list>
#include <vector>

using namespace std;

void cout_int(initializer_list<int> i_init)
{
    for (auto it : i_init)
        cout << it << endl;
}

initializer_list<int> get_val()
{
    return { 1, 2, 3, 4, 5, 6, 7, 8 };
}

int& get_ref(vector<int>& i_vec, size_t pos)
{
    return i_vec[pos];
}

int main(int argc, const char* argv[])
{
    //initializer_list<int> li{1, 2, 3, 4, 5, 6, 7, 8, 9};
    //cout_int(get_val());
    vector<int> i_vec{ 1, 2, 3, 4, 5 };
    get_ref(i_vec, 3) = 6;
    cout << i_vec[3] << endl;

    return 0;
}

