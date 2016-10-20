/* ***********************************************************************

  > File Name: impl.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年10月20日 星期四 14时43分01秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <memory>

using namespace std;

class abstract
{
public:
    virtual void f() = 0;
    virtual void g() = 0;
protected:
    virtual ~abstract() {}
};

class impl : public abstract
{
public:
    virtual void f() { cout << "class impl f()" << endl; }
    virtual void g() { cout << "class impl g()" << endl; }
};

shared_ptr<abstract> create() { return shared_ptr<abstract>(new impl); }

void any_func(void *p) { cout << "some operate" << endl; }

int main(int argc, const char* argv[])
{
    //auto p = create();
    //p->f();
    //p->g();

    //shared_ptr<void> pp((void*)0, any_func);

    shared_ptr<int> sp(new int(10));
    cout << sp.use_count() << endl;

    weak_ptr<int> wp(sp);
    cout << wp.use_count() << endl;
    if (!wp.expired())
    {
        shared_ptr<int> sp2 = wp.lock();
        *sp2 = 100;
        cout << wp.use_count() << endl;
    }
    cout << wp.use_count() << endl;
    sp.reset();
    cout << wp.expired() << endl;

    return 0;
}

