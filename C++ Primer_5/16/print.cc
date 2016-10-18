/* ***********************************************************************

  > File Name: print.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年10月10日 星期一 17时59分52秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>

using namespace std;

template<typename T, unsigned N>
void print(const T (&p)[N])
{
    for (uint32_t i = 0; i < N; ++i)
        cout << p[i] << " ";
    cout << endl;
}

int main(int argc, const char* argv[])
{
    int a[] = {1,2,3,4,5,6,7};
    char c[] = {'a', 'b', 'c', 'd', 'e', 'f'};

    print(a);
    print(c);

    return 0;
}

