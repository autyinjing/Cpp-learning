// =====================================================================================
// 
//       Filename:  morechar.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月20日 17时25分42秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>

int main(int argc, char *argv[])
{
	using namespace std;

	char 	ch = 'M';
	int 	i = ch;

	cout << "The ASCII code for " << ch << " is " << i << endl;

	cout << "Add one to the character code: " << endl;
	ch = ch + 1;
	i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;

	cout << "Displaying char ch using cout.put(ch):";
	cout.put(ch);

	cout.put('!');
	cout << endl << "Done" << endl;
	cout.put( '\n' );

	return 0;
}

