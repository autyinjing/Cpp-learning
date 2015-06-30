// =====================================================================================
// 
//       Filename:  9.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 14时24分44秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>
#include <string>

using namespace std;

struct CandyBar
{
	string 	brand;
	float 	weight;
	int 	calorie;
};

void Init( CandyBar *candy )
{
	if ( candy == NULL )
	      return;

	char 	ch = 'A';
	float 	weight = 10.0;
	int 	calorie = 300;
	int 	i;

	for ( i = 0; i < 3; i++ )
	{
		candy[i].brand = ch++;
		candy[i].weight = weight++;
		candy[i].calorie = calorie++;
	}
}

void Output( CandyBar *candy )
{
	int 	i;

	cout << "brand  weight  calorie\n";
	for ( i = 0; i < 3; i++ )
	{
		cout << candy[i].brand << "  " << candy[i].weight << "  " << candy[i].calorie << endl;
	};
}

int main( void )
{
	CandyBar 	*snack = new CandyBar [3];

	Init( snack );
	Output( snack );

	delete [] snack;

	return 0;
}

