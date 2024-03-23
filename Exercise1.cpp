/*#include<iostream>
using namespace std;
template<typename t>
t GetMax(t n1, t n2) {
	if (n1 > n2) {
		return n1;
	}
	else {
		return n2;
	}
}
template<typename t>
t GetMin(t n1, t n2) {
	if (n1 < n2) {
		return n1;
	}
	else {
		return n2;
	}
}
int main()
{
	int i = 5, j = 6, k;
	long l = 10, m = 5, n;
	k = GetMax<int>(i, j);
	n = GetMin<long>(l, m);
	cout << k << endl;
	cout << n << endl;
	cout << endl << endl;
	char i = 'Z';
	int j = 6, k;
	long l = 10, m = 5, n;
	k = GetMax<int,long>(j, l);
	n = GetMin<int,char>(m, i);
	cout << k << endl;
	cout << n << endl;
	return 0;
}*/