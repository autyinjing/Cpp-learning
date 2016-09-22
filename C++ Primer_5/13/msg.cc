/* ***********************************************************************

  > File Name: msg.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年09月07日 星期三 18时29分06秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include "msg.hpp"

using namespace std;

void showInfo(Msg &m1, Msg &m2, Folder &f1, Folder &f2)
{
    m1.showInfo();
    m2.showInfo();
    f1.showInfo();
    f2.showInfo();
}

void test(Folder &f, Msg &mm)
{
    Msg m("hello");
    m.save(f);
    Folder fm("nice");
    mm.save(fm);
    showInfo(m, mm, fm, f);
}

int main(int argc, const char* argv[])
{
    Msg m1("aut"), m2("honey");
    Folder f1("f1"), f2("f2");

    //f1.addMsg(&m2);
    //f2.addMsg(&m1);
    m1.save(f1);
    m2.save(f2);
    Msg m3(m1);
    Msg m4 = m2;
    Folder f3(f2), f4 = f1;
    test(f2, m1);
    showInfo(m1,m3,f3,f4);

    return 0;
}

