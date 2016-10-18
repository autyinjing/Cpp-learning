/* ***********************************************************************

  > File Name: regexerror.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年10月17日 星期一 16时53分10秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <regex>

using namespace std;

int main(int argc, const char* argv[])
{
    try {
        regex r("[[:alnum:]+\\.(cpp|cc|cxx)$", regex::icase);
    } catch (regex_error e) {
        cout << e.what() << "\ncode: " << e.code() << endl;
    }

    return 0;
}

