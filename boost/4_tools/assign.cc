/* ***********************************************************************

  > File Name: assign.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年11月01日 星期二 18时05分22秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <boost/assign.hpp>
#include <set>
#include <map>
#include <list>
#include <cstdlib>
#include <stack>
#include <queue>
#include "../help/print.cc"

using namespace std;
using namespace boost::assign;

int main(int argc, const char* argv[])
{
    //vector<int> v;
    //v += 1,2,3,4,5,6*6;
    //for (auto it : v)
        //cout << it << endl;

    //set<string> s;
    //s += "cpp", "java", "C#", "python";
    //for (auto it : s)
        //cout << it << endl;

    //map<int, string> m;
    //m += make_pair(1, "one"), make_pair(2, "two");
    //for (auto it : m)
        //cout << it.first << ": " << it.second << endl;

    //vector<int> v;
    //push_back(v)(1)(2)(3)(4)(5);
    //print(v);

    //list<string> l;
    //push_front(l)("cpp")("java")("c#")("python");
    //print(l);

    //set<double> s;
    //insert(s)(3.14)(0.618)(1.732);
    //print(s);

    //vector<int> v = list_of(1)(2)(3)(4)(5);
    //print(v);

    //deque<string> d = 
        //(list_of("power")("bomb"), "phazon", "suit");
    //print(d);

    //map<int, int> ml = map_list_of(1,2)(3,4)(5,6);
    //print_pair(ml);

    //vector<int> v = list_of(2).repeat(3,2);
    //print(v);

    //multiset<int> ms;
    //insert(ms).repeat_fun(5, &rand).repeat(2,1), 10;
    //print(ms);

    //deque<int> d;
    //push_front(d).range(v.begin(), v.begin()+3);
    //print(d);

    //stack<int> stk = (list_of(1), 2, 3).to_adapter();
    //while (!stk.empty())
    //{
        //cout << stk.top() << " ";
        //stk.pop();
    //}
    //cout << endl;

    //queue<string> q = (list_of("china")("us")).repeat(2, "russia").to_adapter();
    //while (!q.empty())
    //{
        //cout << q.front() << " ";
        //q.pop();
    //}

    //priority_queue<double> pq = (list_of(1.414), 1.732, 2.236).to_adapter();
    //while (!pq.empty())
    //{
        //cout << pq.top() << " ";
        //pq.pop();
    //}

    //vector<vector<int>> v = list_of(list_of(1)(2))(list_of(3)(4));
    //v += list_of(5)(6),list_of(7)(8);
    //cout << endl;

    int a = 1, b = 2, c = 3;
    vector<int> v = ref_list_of<3>(a)(b)(c);
    print(v);

    return 0;
}

