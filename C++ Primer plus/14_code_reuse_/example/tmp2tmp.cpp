/*
 * =====================================================================================
 *
 *       Filename:  tmp2tmp.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月19日 11时50分26秒
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

template <typename T> void counts();
template <typename T> void report(T &);

template <typename TT>
class HasFriendT
{
	private:
		TT 		item;
		static int 	ct;
	public:
		HasFriendT(const TT & i) : item(i) { ct++; }
		~HasFriendT() { ct--; }
		friend void counts<TT>();
		friend void report<>(HasFriendT<TT> &);
};

template <typename T>
int HasFriendT<T>::ct = 0;

template <typename T>
void counts()
{
	cout << "template size: " << sizeof(HasFriendT<T>) << "; ";
	cout << "template counts(): " << HasFriendT<T>::ct << endl;
}

template <typename T>
void report(T & hf)
{
	cout << hf.item << endl;
}

int main( int argc, char *argv[] )
{
	counts<int>();
	HasFriendT<int> hfi1(10);
	HasFriendT<int> hfi2(20);
	HasFriendT<double> hfdb(10.5);
	report(hfi1);
	report(hfi2);
	report(hfdb);
	cout << "counts<int>() output:\n";
	counts<int>();
	cout << "counts<double>() output:\n";
	counts<double>();

	return 0;
}
