/* ***********************************************************************

  > File Name: pool.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年10月20日 星期四 15时25分37秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <boost/pool/pool.hpp>
#include <boost/pool/object_pool.hpp>

using namespace std;
using namespace boost;

struct demo_class
{
public:
    int a, b, c;
    demo_class(int x = 1, int y = 2, int z = 3) : a(x), b(y), c(z) {  }
};

int main(int argc, const char* argv[])
{
    //pool<> pl(sizeof(int));

    //int *p = (int *)pl.malloc();
    //*p = 10;
    //cout << p << ": " << *p << endl;

    object_pool<demo_class> pl;
    demo_class *p = pl.malloc();
    //*p = 10;
    //cout << "p: " << p << " value: " << *p << endl;
    p = pl.construct(7, 8, 9);
    cout << p->a << " " << p->b << " " << p->c << endl;

    return 0;
}

