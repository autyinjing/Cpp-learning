/* ***********************************************************************

  > File Name: new_pro.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年10月18日 星期二 20时33分32秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <boost/progress.hpp>
#include <boost/static_assert.hpp>

using namespace std;

template<int N = 2>
class new_progress_timer : public boost::timer
{
public:
    new_progress_timer(ostream & os = cout) : m_os(os)
    {
        BOOST_STATIC_ASSERT(N >= 0 && N <= 10);
    }

    ~new_progress_timer()
    {
        try {
            istream::fmtflags old_flags = m_os.setf(istream::fixed, istream::floatfield);
            streamsize old_proc = m_os.precision(N);

            m_os << elapsed() << " s\n";

            m_os.flags(old_flags);
            m_os.precision(old_proc);
        } catch (...) {}
    }

private:
    ostream & m_os;
};

template<>
class new_progress_timer<2> : public boost::progress_timer
{};

int main(int argc, const char* argv[])
{
    {
        new_progress_timer<> t;
        for (int i = 0; i < 10000000; ++i);
    }

    return 0;
}

