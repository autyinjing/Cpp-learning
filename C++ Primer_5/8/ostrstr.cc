/* ***********************************************************************

  > File Name: ostrstr.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月04日 星期四 11时53分17秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std;

int main(int argc, const char* argv[])
{
    string str;
    ostringstream ostrstr;
    while (cin >> str)
    {
        if (str != "10")
            ostrstr << str;
        else
            break;
    }
    cout << ostrstr.str() << endl;

    return 0;
}

