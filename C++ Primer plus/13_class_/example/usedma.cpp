/*
 * =====================================================================================
 *
 *       Filename:  usedma.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月14日 22时43分03秒
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
	using std::cout;
	using std::endl;

	baseDMA 	shirt("Portabelly", 8);
	lacksDMA 	balloon("red", "Blimpo", 4);
	hasDMA 		map("Mercator", "Buffalo Keys", 5);

	cout << "Displaying baseDMA object:\n";
	cout << shirt << endl;
	cout << "Displaying lacksDMA object:\n";
	cout << balloon << endl;
	cout << "Displaying hasDMA object:\n";
	cout << map << endl;
	lacksDMA balloon2(balloon);
	cout << "Result of lacksDMA copy:\n";
	cout << balloon2 << endl;
	hasDMA 	map2;
	map2 = map;
	cout << "Result of hasDMA assignment:\n";
	cout << map2 << endl;

	return 0;
}
