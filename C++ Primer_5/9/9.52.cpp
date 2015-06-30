// =====================================================================================
//
//       Filename:  9.52.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年10月17日 19时42分00秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  aut (yinjing), linuxeryinjing@gmail.com
//        Company:  Information and Computing Science 1201
//
// =====================================================================================

#include <iostream>
#include <stack>
#include <string>
#include <cctype>

using std::cin;
using std::cout;
using std::string;
using std::endl;
using std::stack;

void    run_optr();
bool    is_number(char);
bool    is_optr(char);
char    compare(char, char);
int     calculate(int, int, char);

int main(int argc, char *argv[])
{        
        run_optr();

        return false;
}

void run_optr()
{
        string          input;
        stack<char>     optr_s;
        stack<int>      num_s;
        int     a, b;
        char    optr;

        while (true)
        {
                getline(cin, input);            //输入表达式
                if (input == "quit")
                        break;
                for (auto val : input)          //逐个处理字符
                        if (is_number(val))
                                num_s.push(val - 48);
                        else if (is_optr(val))
                        {
                                if (!optr_s.empty())
                                {
                                        //优先级比optr栈顶元素高则入栈
                                        if (compare(val, optr_s.top()) == '>')
                                                optr_s.push(val);
                                        //否则，弹出栈顶元素进行运算
                                        else if (num_s.size() >= 2) //防止错误的表达式引起段错误
                                        {
                                                optr = optr_s.top();
                                                optr_s.pop();
                                                b = num_s.top();
                                                num_s.pop();
                                                a = num_s.top();
                                                num_s.pop();
                                                num_s.push(calculate(a, b, optr)); //运算结果入栈
                                                optr_s.push(val);
                                        }
                                        else
                                        {
                                                cout << "Error expression!\n";
                                                return;
                                        }
                                }
                        }
                        else
                                return;
                while (!optr_s.empty()) //逐个取出运算符和运算数进行运算
                {
                        optr = optr_s.top();
                        optr_s.pop();
                        b = num_s.top();
                        num_s.pop();
                        a = num_s.top();
                        num_s.pop();
                        num_s.push(calculate(a, b, optr));
                }
                cout << input << " = " << num_s.top() << endl;
        }
}

bool is_number(char ch)
{
        return (isdigit(ch));
}

bool is_optr(char ch)
{
        return (ch == '+' || ch == '-' || ch == '*' || ch == '/');
}

char compare(char c1, char c2)
{
        if ((c1 == '*' || c1 == '/') && (c2 == '+' || c2 == '-'))
                return '>';
        else
                return '<';
}

int calculate(int a, int b, char op)
{
        switch(op)
        {
                case '+': return a + b;
                case '-': return a - b;
                case '*': return a * b;
                case '/': if (b != 0)
                                  return a / b;
        }
        return 0;
}
