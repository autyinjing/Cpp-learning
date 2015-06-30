/*
 * =====================================================================================
 *
 *       Filename:  33.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月27日 16时05分49秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

const int 	Size = 40;

struct box
{
	char 	maker[Size];
	float 	height;
	float 	width;
	float 	length;
	float 	volume;
};

void 	Print( const box );
void 	Mut( box * );

int main( int argc, char *argv[] )
{
	using namespace std;

	box 	b = { "BMW", 2, 3, 4, 0 };
	
	Print( b );
	Mut( &b );
	Print( b );

	return 0;
}

void Print( const box b )
{
	using namespace std;
	cout << b.maker << endl;
	cout << b.length << ' ' << b.width << ' ' << b.height << endl;
	cout << b.volume << endl;
}

void Mut( box * bp )
{
	bp->volume = bp->length * bp->width * bp->height;
}
