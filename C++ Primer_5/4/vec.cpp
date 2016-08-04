/* ***********************************************************************

  > File Name: vec.cpp
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年08月03日 星期三 15时46分43秒

 ********************************************************************** */

#include <iostream>
#include <vector>

int main(int argc, const char* argv[])
{
    std::vector<int> i_vec;
    i_vec = { 1, 2, 3, 4, 5 };
    for (auto i : i_vec)
        std::cout << i << std::endl;

    return 0;
}

