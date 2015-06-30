// =====================================================================================
//
//       Filename:  test.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年09月24日 16时55分16秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <string>

typedef std::string  Type;
Type initval();
class Exercise
{
        public:
                typedef double Type;
                Type setval(Type);
                Type initval();
        private:
                int val;
};

Type Exercise::setval(Type parm)
{
        val = parm + initval();
        return val;
}

int main()
{
        using namespace std;

        return 0;
}
