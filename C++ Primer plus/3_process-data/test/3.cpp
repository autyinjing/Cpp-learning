// =====================================================================================
// 
//       Filename:  3.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月21日 11时41分54秒
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

	int 		du, fen, miao;
	const double 	FenDu = 1.0 / 60.0;
	const double 	MiaoDu = 1.0 / 3600.0;

	cout << "Enter the du: ";
	cin >> du;
	cout << "fen: ";
	cin >> fen;
	cout << "miao: ";
	cin >> miao;
	cout << du << " du, " << fen << " fen, " << miao << " miao = " << du + fen * FenDu + miao * MiaoDu << endl;

	return 0;
}

