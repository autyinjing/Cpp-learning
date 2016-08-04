/* ***********************************************************************

  > File Name: 9.47.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月04日 星期四 16时05分55秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char* argv[])
{
    string str{"ab2c3d7R4E6"};
    string::size_type pos = 0;
    while (pos != string::npos)
    {
        if (pos != 0)
            pos = pos + 1;
        pos = str.find_first_of(string("0123456789"), pos);
        if (pos != string::npos)
            cout << str[pos];
    }
    cout << endl;
/*    pos = 0;
    while (pos != string::npos)
    {
        if (pos != 0)
            pos = pos + 1;
        pos = str.find_first_of(string("abcdefghijklmnopqrstuvwxyz"), pos);
        if (pos != string::npos)
            cout << str[pos];
    }
    cout << endl;
*/
    return 0;
}

