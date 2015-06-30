/*
 * =====================================================================================
 *
 *       Filename:  2.7.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年03月26日 15时12分37秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  aut (yinjing), linuxeryinjing@gmail.com
 *        Company:  Information and Computing Science 1201
 *
 * =====================================================================================
 */

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

class String
{
        public:
                String() : len(0) { }
                String(const char *s);

                friend ostream &operator<<(ostream &os, const String &str);
                friend istream &operator>>(istream &is, String &str);
                void Add(const String &hs);
                void Getline();
                void Size() { cout << len; }
                void Print() { cout << str; }

                ~String() { }
        private:
                //enum { MAXLEN = 100 };
                static const int       MAXLEN = 100;
                char            str[MAXLEN];
                unsigned        len;
};

String::String(const char *s)
{
        memset(str, '\0', MAXLEN);
        len = strlen(s);
        strncpy(str, s, len + 1);
}

ostream &operator<<(ostream &os, const String &str)
{
        return os << str.str;
}

istream &operator>>(istream &is, String &str)
{
        is >> str.str;
        str.len = strlen(str.str);
        return is;
}

void String::Getline()
{
        int     ch, i = 0;
        while ((ch = getchar()) != '\n' && i < 99)
                str[i++] = ch;
        str[i] = '\0';
        len = i;
}

void String::Add(const String &hs)
{
        int     length;
        length = len + strlen(hs.str);

        if (length > 99) {
                cout << "Too long!" << endl;
        } else {
                strncat(str, hs.str, strlen(hs.str));
                len = length;
        }
}

int main(int argc, char *argv[])
{
        String  s, s2;

        cout << "Enter the str1: ";
        s.Getline();
        cout << "Enter the str2: ";
        s2.Getline();
        s.Add(s2);
        //cout << s << endl;
        cout << "The size is ";
        s.Size();
        cout << endl;
        cout << "The string is \"";
        s.Print();
        cout << "\"" << endl;

	return EXIT_SUCCESS;
}
