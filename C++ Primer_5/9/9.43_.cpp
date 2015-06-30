// =====================================================================================
//
//       Filename:  9.43_.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月15日 08时57分30秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>
#include <string>

using namespace std;

string::const_iterator Search(const string::iterator &,
                const string::iterator &, const string &);
void Replace(string &, const string &, const string &);

int main(int argc, char *argv[])
{
        string  str{"i am a student! and you?"};
        string  sub, val;

        cout << str << endl;
        while (true)
        {
                getline(cin, sub);
                getline(cin, val);
                if (sub == "quit")
                        break;
                /*for (auto it = Search(str.begin(), str.end(), sub); it != str.end(); ++it)
                        cout << *it;*/
                Replace(str, sub, val);
                cout << str << endl;
        }

        return 0;
}

//字符串匹配
string::const_iterator Search(const string::iterator &it_beg,
                const string::iterator &it_end, const string &sub)
{
        auto    first = it_beg, now = it_beg;
        auto    sub_beg = sub.begin();

        while (now != it_end)
        {
                while (*first == *sub_beg)
                {
                        ++first;
                        ++sub_beg;
                }
                if (sub_beg == sub.end())
                        return now;
                first = ++now;
                sub_beg = sub.begin();
        }
        return now;
}

//替换
void Replace(string &s, const string &oldVal, const string &newVal)
{
        auto    pos = Search(s.begin(), s.end(), oldVal);
        while (pos != s.end())
        {
                auto it = s.insert(pos, newVal.begin(), newVal.end());
                it += newVal.size();
                s.erase(it, oldVal.size());

                pos = Search(s.begin(), s.end(), oldVal);
        }
}
