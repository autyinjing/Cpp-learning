/* ***********************************************************************

  > File Name: overload.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年09月21日 星期三 16时52分55秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Test
{
public:
    int operator[](uint32_t idx) { cout << "Test::operator[]" << endl; return 0; }
    const int operator[](uint32_t idx) const { cout << "const Test::operator[]" << endl; return 0; }
    int operator++(int) { cout << "Test::operator++" << endl; return 0; }
    int operator++() { cout << "Test::++operator" << endl; return 0; }
    
private:
    int a;
};

int main(int argc, const char* argv[])
{
    Test t;
    t[1];
    const Test t2 = t;
    t2[2];

    t++;
    ++t;

    return 0;
}

