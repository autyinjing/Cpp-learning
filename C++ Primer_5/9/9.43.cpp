// =====================================================================================
//
//       Filename:  9.43.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月26日 17时06分43秒
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
        void replace(string &s, const string &oldVal, const string &newVal);
        string  str{"i tho and you? fuck! thru bitch!"};

        cout << str << endl;
        replace(str, string("tho"), string("though"));
        cout << str << endl;
        replace(str, string("thru"), string("through"));
        cout << str << endl;

        return 0;
}

void replace(string &s, const string &oldVal, const string &newVal)
{
        auto    it = s.begin();

        s.reserve(s.size() + newVal.size());
        while (it != s.end())
        {
                auto    pos = s.find(oldVal);
                if (pos == string::npos)
                        break;
                else
                {
                        it = it + pos - 1;
                        s.erase(pos, oldVal.size());
                        //it = s.begin() + pos;
                        s.insert(pos + 1, newVal);
                        it = s.begin() + pos + newVal.size();
                }
        }
}
