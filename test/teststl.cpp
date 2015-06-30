/*
 * =====================================================================================
 *
 *       Filename:  teststl.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年03月26日 16时10分40秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  aut (yinjing), linuxeryinjing@gmail.com
 *        Company:  Information and Computing Science 1201
 *
 * =====================================================================================
 */

#include <iostream>
#include <cstdlib>
#include <algorithm>
#include <vector>

int main(int argc, char *argv[])
{
        using namespace std;

	vector<int>     ivec;

        for (int i = 0; i < 100; i++)
                ivec.push_back(i);
        for (auto i : ivec)
                cout << i << endl;
        fill(ivec.begin(), ivec.end(), 666);
        for (auto i : ivec)
                cout << i << endl;

	return EXIT_SUCCESS;
}
