/* ***********************************************************************

  > File Name: regex.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年10月17日 星期一 15时45分51秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <regex>

using namespace std;

int main(int argc, const char* argv[])
{
    string pattern("[^c]ei");
    pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
    regex r(pattern);
    smatch results;
    string test_str = "receipt freind theif recvive";
    if (regex_search(test_str, results, r))
        cout << results.str() << endl;

    return 0;
}

