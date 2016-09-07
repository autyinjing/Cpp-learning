/* ***********************************************************************

  > File Name: bit.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月18日 星期四 18时33分58秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <bitset>

using namespace std;

int main(int argc, const char* argv[])
{
    bitset<8> bit;
    cin >> bit;
    cout << bit << ": " << bit.to_ulong() << endl;

    return 0;
}

