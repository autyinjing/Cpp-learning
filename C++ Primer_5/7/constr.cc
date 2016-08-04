/* ***********************************************************************

  > File Name: constr.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月03日 星期三 18时56分28秒

 ********************************************************************** */

#include <iostream>

using namespace std;

class constr
{
public:
    constr(int a, int b, int c) : aa(a), bb(b), cc(c) { cout << "a b c" << endl; }
    constr() : constr(0, 0, 0) { cout << "0 0 0" << endl; }
    constr(int a, int b) : constr(0, a, b) { cout << "0 a b" << endl; }

private:
    int aa;
    int bb;
    int cc;
};

int main(int argc, const char* argv[])
{
    constr();
    constr(1, 2);

    return 0;
}

