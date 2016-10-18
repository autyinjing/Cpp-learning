/* ***********************************************************************

  > File Name: compare.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年10月10日 星期一 17时27分10秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <cstring>

using namespace std;

template<unsigned N, unsigned M>
int compare(const char (&p1)[N], const char (&p2)[M])
{
    cout << N << " " << M << " " << endl;
    return strcmp(p1, p2);
}

template<typename T>
int compare(const T& t1, const T& t2)
{
    return t1 < t2;
}

struct a
{
    int b;
};

int main(int argc, const char* argv[])
{
    //cout << compare("hi", "mom") << endl;
    a aa, bb;
    cout << compare(aa, bb) << endl;

    return 0;
}

