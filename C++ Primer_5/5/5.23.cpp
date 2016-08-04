/* ***********************************************************************

  > File Name: 5.23.cpp
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月03日 星期三 17时28分28秒

 ********************************************************************** */

#include <iostream>

using namespace std;

int main(int argc, const char* argv[])
{
    while ( 1 )
    {
        int a, b;
      //  try {
            cin >> a >> b;
            if (b == 0)
                throw runtime_error("b == 0");
            cout << a / b << endl;
//        } catch (runtime_error err) {
  //          cout << err.what();
    //    }
    }

    return 0;
}

