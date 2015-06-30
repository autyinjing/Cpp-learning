// =====================================================================================
//
//       Filename:  3.25.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月22日 14时27分16秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int main()
{
        using namespace std;
        vector<int>     ivec(11, 0);
        int             grade;
        int             level;

        cin >> grade;
        for (auto it = ivec.begin(); grade >= 0; cin >> grade)
        {
                if (grade <= 100)
                {
                        level = grade / 10;
                        ++*(it + level);
                }
        }
        for (auto it = ivec.cbegin(); it != ivec.cend(); ++it)
                cout << *it << ' ';
        cout << endl;

        return 0;
}
