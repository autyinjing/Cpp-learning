// =====================================================================================
// 
//       Filename:  sumafile.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年03月24日 13时31分47秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>
#include <fstream>
#include <cstdlib>

int main()
{
	using namespace std;
	const int 	SIZE = 60;

	char 		filename[SIZE];
	ifstream 	inFile;
	
	cout << "Enter name of data file: ";
	cin.getline(filename, SIZE);
	inFile.open(filename);
	if ( !inFile.is_open() )
	{
		cout << "Could not open the file " << filename << endl;
		cout << "Program terminating.\n";
		exit(EXIT_FAILURE);
	}
	double 	value;
	double 	sum = 0.0;
	int 	count = 0;

	while ( inFile >> value )
	{
		++count;
		sum += value;
	}
	if ( inFile.eof() )
	      cout << "End of file reached.\n";
	else if ( inFile.fail() )
	      cout << "Input terminated by data mismatch.\n";
	else
	      cout << "Input terminated for unknow reason.\n";
	if ( count == 0 )
	      cout << "No data processed.\n";
	else
	{
		cout << "Items read: " << count << endl;
		cout << "Sum: " << sum << endl;
		cout << "Average: " << sum / count << endl;
	}
	inFile.close();

	return 0;
}
