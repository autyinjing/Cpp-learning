/* ***********************************************************************

  > File Name: file.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月18日 星期四 14时16分56秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <fstream>

using namespace std;

int main(int argc, const char* argv[])
{
    ifstream ifile(argv[1]);
    string str;
    while (getline(ifile, str))
    {
        cout << str << endl;
    }
    ifile.close();

    return 0;
}

