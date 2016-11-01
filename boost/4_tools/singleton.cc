/* ***********************************************************************

  > File Name: singleton.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年11月01日 星期二 21时12分37秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
//#include <boost/pool/details/singleton.hpp>

using namespace std;
//using namespace boost::details::pool::singleton_default;

template<typename T>
class singleton_default
{
public:
    ~singleton_default() {
        m_instance_ = nullptr;
        cout << "~singleton_default" << endl;
    }
    typedef T object_type;
    static object_type & instance() { if (m_instance_ == nullptr) m_instance_ = new T(); return *m_instance_; }

private:
    static T* m_instance_;
};

template<typename T> T * singleton_default<T>::m_instance_ = nullptr;

class single
{
public:
    single() { cout << "single()" << endl; }
};

int main(int argc, const char* argv[])
{
    typedef singleton_default<single> origin;
    origin::instance();
    origin::instance();
    origin::instance();
    origin::instance();

    return 0;
}

