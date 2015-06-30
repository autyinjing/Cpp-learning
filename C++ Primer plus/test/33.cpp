/*
 * =====================================================================================
 *
 *       Filename:  33.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月09日 09时35分23秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include <cstring>

struct chaff
{
	char 	dross[20];
	int 	slag;
};

const int 	Size = 512;
//char 		buffer[Size];
char 		* buffer = new char[Size];

int main( int argc, char *argv[] )
{
	using namespace std;

	chaff 	* ch = new (buffer) chaff[2];

	strcpy(ch[0].dross, "yinjing");
	ch[0].slag = 7;
	strcpy(ch[1].dross, "honey");
	ch[1].slag = 12;

	for ( int i = 0; i < 2; i++ )
	{
		cout << "dross: " << ch[i].dross << endl;
		cout << "slag: " << ch[i].slag << endl;
	}
	delete [] buffer;

	return 0;
}
