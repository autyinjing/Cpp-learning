/*
 * =====================================================================================
 *
 *       Filename:  usedma.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月15日 17时11分22秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>
#include "dma.h"

int main( int argc, char *argv[] )
{
	DMA 	*pd[3];
	for ( int i = 0; i < 3; i++ )
	{
		cout << "Enter the label: ";
		string 	label;
		getline(cin, label, '\n');
		cout << "\nEnter the rating: ";
		int 	rat;
		cin >> rat;
		cout << "Enter the 1 for baseDMA" << endl
			<< "2 for lacksDMA" << endl
			<< "3 for hasDMA" << endl;
		int 	temp;
		cin >> temp;
		cin.get();

		if ( temp == 1 )
		      pd[i] = new baseDMA(label, rat);
		else if ( temp == 2 )
		{
			cout << "Enter the color: ";
			string 	color;
			getline(cin, color);
			pd[i] = new lacksDMA(color, label, rat);
		}
		else if ( temp == 3 )
		{
			cout << "Enter the style: ";
			string 	style;
			getline(cin, style);
			pd[i] = new hasDMA(style, label, rat);
		}
		else
		{
			cout << "invalid input! try again!" << endl;
			i--;
		}
		while ( cin.get() != '\n')
		      continue;
	}
	for ( int i = 0; i < 3; i++ )
	      pd[i]->show();
//	system("pause");

	return 0;
}
