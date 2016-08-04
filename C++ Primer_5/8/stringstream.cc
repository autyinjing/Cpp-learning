/* ***********************************************************************

  > File Name: stringstream.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月04日 星期四 11时45分28秒

 ********************************************************************** */

#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main(int argc, const char* argv[])
{
    string input;
    while (cin >> input)
    {
        istringstream strstr(input);
        string help;
        while (strstr >> help)
        {
            cout << help;
        }
        cout << endl;
    }

    return 0;
}

