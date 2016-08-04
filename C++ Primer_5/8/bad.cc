/* ***********************************************************************

  > File Name: bad.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月04日 星期四 11时04分46秒

 ********************************************************************** */

#include <iostream>

using namespace std;

int main(int argc, const char* argv[])
{
    cout << cin.fail() << cin.bad() << cin.good() << endl;
    
    while ( 1 )
    {
        int i;
        cin >> i;
        cout << cin.fail() << cin.bad() << cin.good() << endl;
    }

    return 0;
}

