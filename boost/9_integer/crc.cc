/* ***********************************************************************

  > File Name: crc.cc
  > Author: Aut
  > Mail: aut@taomee.com 
  > Created Time: 2016年11月16日 星期三 15时23分57秒

 ********************************************************************** */

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <boost/crc.hpp>

using namespace std;
using namespace boost;

int main(int argc, const char* argv[])
{
    crc_32_type crc32;

    cout << hex;
    cout << crc32.checksum() << endl;
    crc32.process_byte('a');
    cout << crc32.checksum() << endl;
    crc32.process_bytes("1234567890", 10);
    cout << crc32.checksum() << endl;

    char szCh[] = "1234567890";
    crc32.reset();
    crc32.process_block(szCh, szCh + 10);
    cout << crc32.checksum() << endl;

    return 0;
}

