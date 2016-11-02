/* ***********************************************************************

  > File Name: optional.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年10月31日 星期一 17时01分15秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <boost/optional.hpp>
#include <cmath>
#include <boost/utility/in_place_factory.hpp>

using namespace std;
using namespace boost;

optional<double> calc(int x)
{
    return optional<double>( x != 0, 1.0 / x );
}

optional<double> sqrt_op(double x)
{
    return optional<double>( x > 0, sqrt(x) );
}

optional<double> chufa(double a, double b)
{
    return optional<double>(b != 0, a / b);
}

class test
{
public:
    test(int i) { cout << "test(), i = " << i << endl; };
    test(const test& t) { cout << "copy test" << endl; }
};

int main(int argc, const char* argv[])
{
    //optional<double> d = calc(7);
    //if (d) {
        //cout << *d << endl;
    //}
    //d = sqrt_op(-10);
    //if (!d) {
        //cout << "No result" << endl;
    //}

    //optional<test> op1(2);
    //optional<test> op2(in_place(1));
    //vector<int> opv(10, 3);

    auto ret = chufa(1, 2.5);
    if (ret) {
        cout << *ret << endl;
    } else {
        cout << "除数为0！" << endl;
    }

    return 0;
}

