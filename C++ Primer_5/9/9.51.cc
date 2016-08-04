/* ***********************************************************************

  > File Name: 9.51.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月04日 星期四 16时41分31秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Date
{
public:
    Date(const string str);

    void print();

private:
    unsigned int m_year;
    unsigned int m_month;
    unsigned int m_day;
};

int main(int argc, const char* argv[])
{
    string str1("1/1/1990"), str2("Jan 1 1900"), str3("Jan 1,1900");
    Date d(str1);
    d.print();

    return 0;
}

Date::Date(const string str)
{
    string::size_type pos;
    if ((pos = str.find(',')) != string::npos) {
        //xxx
    } else if ((pos = str.find('/')) != string::npos) {
        string::size_type beg = 0, end = pos;
        m_day = atoi(str.c_str());
        pos += 1;
        beg = pos;
        pos = str.find('/', pos);
        if (pos != string::npos)
            m_month = atoi(str.c_str, beg);
        pos += 1;
        beg = pos;
        if (pos != string::npos)
            m_year = atoi(str.c_str, beg);
    } else if ((pos = str.find(' ')) != string::npos) {
        //xxx
    }
}

void Date::print()
{
    cout << m_year << '-' << m_month << '-' << m_day << endl;
}
