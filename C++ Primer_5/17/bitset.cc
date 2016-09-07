/* ***********************************************************************

  > File Name: bitset.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月18日 星期四 18时16分41秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <bitset>

using namespace std;

int main(int argc, const char* argv[])
{
    string s = "110101001010110101010101";
    bitset<8> b(s);
    cout << s << endl << b << endl << b.to_ulong() << endl;

    return 0;
}

