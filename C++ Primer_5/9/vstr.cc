/* ***********************************************************************

  > File Name: vstr.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月04日 星期四 15时49分25秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char* argv[])
{
    vector<char> c_vec{ 'a', 'b', 'c', 'd' };
    string str(c_vec.begin(), c_vec.end());
    cout << str << endl;

    return 0;
}

