// =====================================================================================
//
//       Filename:  9.28.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月26日 15时12分34秒
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
        
using namespace std;

int main(int argc, char *argv[])
{
        forward_list<string>    sflst{"china", "usa", "japan", "shanghai"};
        void replace(forward_list<string> &, const string &, const string &);

        for (auto s : sflst)
                cout << s << endl;
        replace(sflst, string("japan"), string("dog"));
        for (auto s : sflst)
                cout << s << endl;
        replace(sflst, string("japanese"), string("pig"));
        for (auto s : sflst)
                cout << s << endl;

        return 0;
}

void replace(forward_list<string> &sflst, const string &str1, const string &str2)
{
        int     flag = 0;
        auto    prev = sflst.before_begin();
        auto    curr = sflst.begin();
        auto    end = sflst.end();
        while (curr != end)
                if (*curr == str1)
                {
                        curr = sflst.emplace_after(curr, str2);
                        flag = 1;
                }
                else
                {
                        prev = curr;
                        ++curr;
                }
        if (!flag)
                sflst.insert_after(prev, str2);
}
