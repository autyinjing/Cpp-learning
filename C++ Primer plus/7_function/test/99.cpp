/*
 * =====================================================================================
 *
 *       Filename:  99.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年08月27日 22时00分08秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

using namespace std;

const int 	SLEN = 30;

struct student
{
	char 	fullname[SLEN];
	char 	hobby[SLEN];
	int 	ooplevel;
};

int 	getinfo( student [], int );
void 	display1( student );
void 	display2( const student * );
void 	display3( const student [], int );

int main( int argc, char *argv[] )
{
	cout << "Enter class size: ";
	int 	class_size;
	cin >> class_size;
	while ( cin.get() != '\n' )
	      continue;

	student * ptr_stu = new student [class_size];
	int 	entered = getinfo(ptr_stu, class_size);
	for ( int i = 0; i < entered; i++ )
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, entered);
	delete [] ptr_stu;
	cout << "Done\n";

	return 0;
}

int getinfo( student pa[], int n )
{
	int 	i;
	for ( i = 0; i < n; i++ )
	{
		cout << "student" << i+1 << endl;
		cout << "name: ";
		cin >> pa[i].fullname;
		cout << "hobby: ";
		cin >> pa[i].hobby;
		cout << "ooplevel: ";
		cin >> pa[i].ooplevel;
		if ( pa[i].ooplevel == 0 )
		      break;
	}
	return i;
}

void display1( student st )
{
	cout << "name: " << st.fullname << endl;
	cout << "hobby: " << st.hobby << endl;
	cout << "ooplevel: " << st.ooplevel << endl;
}

void display2( const student * ps )
{
	cout << "name: " << ps->fullname << endl;
	cout << "hobby: " << ps->hobby << endl;
	cout << "ooplevel: " << ps->ooplevel << endl;
}

void display3( const student pa[], int n )
{
	for ( int i = 0; i < n; i++ )
	{
		cout << "name: " << pa[i].fullname << endl;
		cout << "hobby: " << pa[i].hobby << endl;
		cout << "ooplevel: " << pa[i].ooplevel << endl;
	}
}
