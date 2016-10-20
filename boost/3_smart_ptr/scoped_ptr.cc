/* ***********************************************************************

  > File Name: scoped_ptr.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年10月20日 星期四 11时53分30秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
//#include <boost/smart_ptr.hpp>
#include <memory>

//using namespace boost;
using namespace std;

//struct posix_file
//{
    //posix_file(const char* file_name) { cout << "open file: " << file_name << endl; }
    //~posix_file() { cout << "close file" << endl; }
//};

//class shared
//{
//private:
    //shared_ptr<int> p;

//public:
    //shared(shared_ptr<int> p_) : p(p_) {}
    //void print() { cout << "count: " << p.use_count() << " v = " << *p << endl; }
    //void print_func(shared_ptr<int> p) 
    //{ cout << "count: " << p.use_count() << " v = " << *p << endl; }
//};

class sample
{
private:
    class impl;
    shared_ptr<impl> p;
public:
    sample();
    void print();
};

class sample::impl
{
public:
    void print() { cout << "impl print" << endl; }
};

sample::sample() : p(new impl) {}
void sample::print() { p->print(); }

int main(int argc, const char* argv[])
{
    //scoped_ptr<int> p(new int);
    //if (p)
    //{
        //*p = 100;
        //cout << *p << endl;
    //}
    //p.reset();
    //if (!p) {
        //cout << "scoped_ptr == null" << endl;
    //}

    //scoped_ptr<posix_file> fp(new posix_file("help.txt"));

    //int *arr = new int[100];
    //scoped_array<int> sa(arr);
    //fill_n(&sa[0], 100, 5);
    //cout << sa[0] << " " << sa[99] << endl;

    //shared_ptr<int> p(new int(100));
    //shared s1(p), s2(p);

    //s1.print();
    //s2.print();

    //*p = 20;
    //s1.print_func(p);

    //s1.print();

    //typedef vector<shared_ptr<int>> vs;
    //vs v(10);

    //int i = 0;
    //for (vs::iterator pos = v.begin(); pos != v.end(); ++pos)
    //{
        //(*pos) = make_shared<int>(++i);
        //cout << *(*pos) << ", ";
    //}
    //cout << endl;
    //shared_ptr<int> pp = v[9];
    //*pp = 100;
    //cout << *v[9] << endl;

    sample s;
    s.print();

    return 0;
}

