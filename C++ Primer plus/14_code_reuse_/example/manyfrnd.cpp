/*
 * =====================================================================================
 *
 *       Filename:  manyfrnd.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月19日 12时05分46秒
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Aut(yinjing), linuxeryinjing@gmail.com
 *        Company:  Class 1201 of Information and Computing Science
 *
 * =====================================================================================
 */
#include <iostream>

using std::cout;
using std::endl;

template <typename T>
class ManyFriend
{
	private:
		T 	item;
	public:
		ManyFriend(const T & i) : item(i) {}
		template <typename C, typename D> friend void show2(C &, D & d);
};

template <typename C, typename D> void show2(C & c, D & d)
{
	cout << c.item << ", " << d.item << endl;
}

int main( int argc, char *argv[] )
{
	ManyFriend<int> hfi1(10);
	ManyFriend<int> hfi2(20);
	ManyFriend<double> hfdb(10.5);
	cout << "hfi1, hfi2: ";
	show2(hfi1, hfi2);
	cout << "hfdb, hfi2: ";
	show2(hfdb, hfi2);

	return 0;
}
