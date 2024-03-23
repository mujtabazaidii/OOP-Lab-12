/*#include<iostream>
using namespace std;
template<typename t> class Container {
	t s;
public:
	Container(t i = 0) {
		s = i;
	}
	t decrease() {
		s--;
		return s;
	}
};
template<> class Container<char> {
	char s;
public:
	Container(char i = ' ') {
		s = i;
	}
	char uppercase() {
		if (s >= 97 && s <= 122) {
			s -= 32;
		}
		return s;
	}
};
template<> class Container<int> {
	int s;
public:
	Container(int i = 0) {
		s = i;
	}
	int increase() {
		s++;
		return s;
	}
};
int main()
{
	Container<double> mydouble(5.78);
	Container<long> mylong(345679459);
	Container<int> myint(7);
	Container<char>mychar('m');
	cout << myint.increase() << endl;
	cout << mychar.uppercase() << endl;
	cout << mydouble.decrease() << endl;
	cout << mylong.decrease() << endl;
	return 0;
}*/