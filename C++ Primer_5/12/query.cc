/* ***********************************************************************

  > File Name: query.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月18日 星期四 16时07分08秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include "querytext.hpp"

using namespace std;

void runQueries(ifstream &ifile)
{
    TextQuery tq(ifile);
    string str;
    while (true)
    {
        cout << "Enter word: ";
        cin >> str;
        if (str == "q")
            break;
        print(cout, tq.query(str)) << endl;
    }
}

int main(int argc, const char* argv[])
{
    ifstream ifile(argv[1]);
    runQueries(ifile);

    return 0;
}

