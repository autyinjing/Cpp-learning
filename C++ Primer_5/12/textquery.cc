/* ***********************************************************************

  > File Name: textquery.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月18日 星期四 14时55分53秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <fstream>
#include <set>
#include <map>
#include <sstream>

using namespace std;

void read_from_file(vector<string> &file_info, 
    ifstream &ifile, map<string, set<int>> &words_info)
{
    string str;
    int line_no = 0;
    while (getline(ifile, str))
    {
        ++line_no;
        file_info.push_back(str);
        istringstream line(str);
        string word;
        while (line >> word)
        {
            words_info[word].insert(line_no);
        }
    }
}

void query(vector<string> &file_info, map<string, set<int>> words_info)
{
    string word;
    while (cin >> word && word != "q")
    {
        auto it = words_info.find(word);
        if (it != words_info.end()) {
            cout << word << ": " << it->second.size() << endl;
            for (const auto& s : it->second)
                cout << s << ": " << file_info[s-1] << endl;
        } else {
            cout << "Not find '" << word << "'" << endl;
        }
    }
}

int main(int argc, const char* argv[])
{
    ifstream ifile(argv[1]);
    map<string, set<int>> words_info;
    vector<string> file_info;

    read_from_file(file_info, ifile, words_info);
    query(file_info, words_info);

    return 0;
}

