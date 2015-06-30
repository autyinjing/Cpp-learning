// =====================================================================================
//
//       Filename:  10.16_.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月08日 09时30分10秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>
#include <vector>
#include <string>
#include <list>
#include <deque>
#include <forward_list>
#include <algorithm>
#include <functional>

using namespace std;
using namespace std::placeholders;

int main(int argc, char *argv[])
{
        void elimDups(vector<string> &vec);
        void biggies(vector<string> &vec, vector<string>::size_type sz);
        bool check_size(const string &s, unsigned sz);

        vector<string>  svec{"the", "quick", "red", "fox", "jumps", 
                        "over", "the", "slow", "red", "turtle"};

        biggies(svec, 5);

        return 0;
}

void elimDups(vector<string> &vec)
{
        sort(vec.begin(), vec.end());
        auto    end_unique = unique(vec.begin(), vec.end());
        vec.erase(end_unique, vec.end());
}

void biggies(vector<string> &vec, vector<string>::size_type sz)
{
        bool check_size(const string &s, unsigned sz);
        elimDups(vec);
        stable_sort(vec.begin(), vec.end(),
                        [] (const string &a, const string &b)
                        { return a.size() < b.size(); });
        //auto    wc = find_if(vec.begin(), vec.end(),
          //              [sz] (const string &s)
            //            { return s.size() >= sz; });
        //auto    wc = stable_partition(vec.begin(), vec.end(),
          //              [sz] (const string &s)
            //            { return s.size() < sz; });
        auto    wc = partition(vec.begin(), vec.end(),
                                bind(check_size, _1, sz));
        auto    count = vec.end() - wc;
        
        cout << "Count: " << count << endl;
        for_each(wc, vec.end(),
                        [] (const string &s) 
                        { cout << s << ' '; });
        cout << endl;
}

bool check_size(const string &str, unsigned sz)
{
        return str.size() < sz;
}
