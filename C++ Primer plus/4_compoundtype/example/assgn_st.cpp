// =====================================================================================
// 
//       Filename:  assgn_st.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月21日 20时38分17秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

struct inflatable
{
	char 	name[20];
	float 	volume;
	double 	price;
};

int main( void )
{
	using namespace std;

	inflatable 	bouquet = 
	{
		"sunflowers",
		0.20,
		12.49
	};

	inflatable 	choice;
	cout << "bouquet: " << bouquet.name << " for $";
	cout << bouquet.price << endl;

	choice = bouquet;
	cout << "choice: " << choice.name << " for $";
	cout << choice.price << endl;

	return 0;
}

