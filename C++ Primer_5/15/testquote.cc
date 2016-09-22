/* ***********************************************************************

  > File Name: testquote.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年09月22日 星期四 11时32分39秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <memory>
#include "quote.hpp"

int main(int argc, const char* argv[])
{
    Bulk_quote bq("CSAPP", 89.5, 8, 0.9);
    Quote *q = &bq;
    auto p = make_shared<Quote>("APUE", 98);

    bq.debug();
    q->debug();
    p->debug();

    return 0;
}

