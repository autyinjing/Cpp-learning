/* ***********************************************************************

  > File Name: regexcc.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年10月17日 星期一 16时49分03秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <regex>

using namespace std;

int main(int argc, const char* argv[])
{
    regex r("[[:alnum:]]+\\.(cpp|cxx|cc)$", regex::icase);
    smatch results;
    string filename;
    while (cin >> filename)
        if (regex_search(filename, results, r))
            cout << results.str() << endl;

    return 0;
}

