/*
 * =====================================================================================
 *
 *       Filename:  2.6.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2015年03月26日 14时58分59秒
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

class Counter
{
        public:
                Counter() = default;
                Counter(int number) : value(number) { }

                void increment();
                void decrement();
                int getvalue();
                void print();

                ~Counter() { }
        private:
                int     value;
};

void Counter::increment()
{
        value++;
}

void Counter::decrement()
{
        value--;
}

int Counter::getvalue()
{
        return this->value;
}

void Counter::print()
{
        std::cout << value;
}

int main(int argc, char *argv[])
{
        int     a;

        std::cout << "Enter a number: ";
        std::cin >> a;
 
        Counter c(a);
        std::cout << "The number is ";
        c.print();
        std::cout << std::endl;
        c.increment();
        std::cout << "After ++ " << c.getvalue() << std::endl;
        c.decrement();
        std::cout << "After -- " << c.getvalue() << std::endl;

	return EXIT_SUCCESS;
}
