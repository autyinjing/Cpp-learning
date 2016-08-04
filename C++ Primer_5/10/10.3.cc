/* ***********************************************************************

  > File Name: 10.3.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月04日 星期四 18时21分21秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <numeric>

using namespace std;

int main(int argc, const char* argv[])
{
    vector<double> i_vec{ 1.1, 3.1, 5.3, 7.5, 9.5, 11 };
    cout << accumulate(i_vec.cbegin(), i_vec.cend(), 0.0) << endl;

    return 0;
}

