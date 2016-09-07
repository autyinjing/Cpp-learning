/* ***********************************************************************

  > File Name: multi_word_trans.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月16日 星期二 19时56分54秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>
#include <fstream>
#include <sstream>

using namespace std;

unordered_map<string, string> buildMap(ifstream& trans_file)
{
    string str, word;
    unordered_map<string, string> umap;
    while(trans_file >> word && getline(trans_file, str))
    {
        //istringstream stream(str);
        if (str.size() > 1)
            umap[word] = str.substr(1);
        else
            throw runtime_error("no rule for " + word);
    }
    return umap;
}

const string&
trans(const string& word, const unordered_map<string, string> trans_file)
{
    auto map_it = trans_file.find(word);
    if (map_it != trans_file.cend())
        return map_it->second;
    else
        return word;
}

void trans_form(ifstream& input, ifstream& trans_file)
{
    auto trans_map = buildMap(trans_file);
    string text;
    while (getline(input, text))
    {
        istringstream stream(text);
        string word;
        bool first = true;
        while (stream >> word)
        {
            if (first)
                first = false;
            else
                cout << " ";
            cout << trans(word, trans_map);
        }
        cout << endl;
    }
}

int main(int argc, const char* argv[])
{
    ifstream input(argv[1]), trans_file(argv[2]);
    trans_form(input, trans_file);

    return 0;
}

