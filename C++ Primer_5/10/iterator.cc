/* ***********************************************************************

  > File Name: iterator.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月11日 星期四 15时20分15秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <iterator>
#include <algorithm>
#include <numeric>

using namespace std;

int main(int argc, const char* argv[])
{
    istream_iterator<int> in(cin), eof;
    cout << accumulate(in, eof, 0) << endl;

    return 0;
}

