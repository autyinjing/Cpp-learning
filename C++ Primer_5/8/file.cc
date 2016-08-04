/* ***********************************************************************

  > File Name: file.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月04日 星期四 11时27分54秒

 ********************************************************************** */

#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using namespace std;

int main(int argc, const char* argv[])
{
    ifstream infile;
    infile.open(argv[1], ifstream::in);
    cout << infile.is_open() << endl;
    vector<string> s_vec;
    while (!infile.eof())
    {
        string help;
        getline(infile, help);
        s_vec.push_back(help);
    }
    for (auto const& it : s_vec)
        cout << it << endl;

    return 0;
}

