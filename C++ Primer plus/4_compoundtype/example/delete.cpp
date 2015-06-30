// =====================================================================================
// 
//       Filename:  delete.cpp
//
//    Description:  
//
//        Version:  1.0
//        Created:  2014年02月22日 10时59分30秒
//       Revision:  none
//       Compiler:  g++
//
//         Author:  Aut(yinjing), linuxeryinjing@gmail.com
//        Company:  Class 1201 of Information and Computing Science
// 
// =====================================================================================

#include <iostream>
#include <cstring>

using namespace std;

char 	* getname(void);

int main()
{
	char * name;

	name = getname();
	cout << name << " at " << (int *) name << "\n";
	delete [] name;

	name = getname();
	cout << name << " at " << (int *) name << endl;
	delete [] name;

	return 0;
}

char * getname( void )
{
	char 	temp[80];
	
	cout << "Enter last name:";
	(cin >> temp).get();
	char * pn = new char [strlen(temp + 1)];
	strcpy(pn, temp);

	return pn;
}
