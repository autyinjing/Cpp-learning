/*
 * =====================================================================================
 *
 *       Filename:  tempmemb.cpp
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  2014年09月16日 22时59分10秒
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
class beta
{
	private:
		template <typename V>
			class hold;
			/*{
				private:
					V val;
				public:
					hold(V v = 0) : val(v) {}
					void show() const { cout << val << endl; }
					V Value() const { return val; }
			};*/
		hold<T> q;
		hold<int> n;
	public:
		beta(T t, int i) : q(t), n(i) {}
		template<typename U>
			U blab(U u, T t);/* { return (n.Value() + q.Value()) * u / t; }*/
		void Show() const { q.show(); n.show(); }
};

template <typename T>
template <typename V>
class beta<T>::hold
{
	private:
		V 	val;
	public:
		hold(V v = 0) : val(v) {}
		void show() const { std::cout << val << std::endl; }
		V Value() const { return val; }
};

template <typename T>
template <typename U>
U beta<T>::blab(U u, T t)
{
	return (n.Value() + q.Value()) * u / t;
}

int main( int argc, char *argv[] )
{
	beta<double> guy(3.5, 3);
	cout << "T was set to double\n";
	guy.Show();
	cout << "V was set to T, which is double, then V was set to int\n";
	cout << guy.blab(10, 2.3) << endl;
	cout << "U was set to int\n";
	cout << guy.blab(10.0, 2.3) << endl;
	cout << "U was set to double\n";
	cout << "Done\n";

	return 0;
}
