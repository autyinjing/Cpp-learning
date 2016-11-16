/* ***********************************************************************

  > File Name: retional.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年11月16日 星期三 14时43分45秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cmath>
#include <typeinfo>
#include <boost/rational.hpp>
#include <boost/format.hpp>

using namespace std;
using namespace boost;

int main(int argc, const char* argv[])
{
    //rational<int> a(3), b(65534), c(22,7);

    //cout << a << " " << b << " " << c << endl;
    //b += a;
    //c -= a;
    //cout << a << " " << b << " " << c << endl;
    //if (c >= 0)
    //{
        //c = c * b;
        //++a; 
        //cout << a << " " << b << " " << c << endl;
    //}

    //rational<int> r(2718, 1000);
    //cout << rational_cast<int>(r) << endl;
    //cout << rational_cast<double>(r) << endl;

    //rational<int> r;
    //cin >> r;
    //cout << ++r << endl;

    //rational<int> a(1414, 1000), pi(314, 100);

    //cout << abs(a) << endl;
    //cout << pow(rational_cast<double>(a), 2) << endl;
    //cout << cos(rational_cast<double>(pi)) << endl;

    //rational<int> a(22, 7), b;
    //try {
        //a / b;
    //} catch (bad_rational& e) {
        //cout << typeid(e).name() << e.what() << endl;
    //}

    int a = 37, b = 62;
    format fmt("gcd(%1%, %2%) = %3%.lcm(%1%, %2%) = %4%\n");
    cout << fmt % a % b % gcd(a, b) % lcm(a, b);

    return 0;
}

