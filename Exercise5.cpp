#include<iostream>
using namespace std;
template<typename t>
class Pair {
	t values[2];
	template <class identifier> friend ostream& operator << (ostream& out, const Pair<identifier>& p) {
		out << p.values;
		return out;
	}
public:
	Pair(t n1 = 0, t n2 = 0) {
		values[0] = n1;
		values[1] = n2;
	}
	t GetMax() {
		if (values[0] > values[1]) {
			return values[0];
		}
		else {
			return values[1];
		}
	}
	t GetMin() {
		if (values[0] < values[1]) {
			return values[0];
		}
		else {
			return values[1];
		}
	}
};
template <class T, int N>
class Sequence {
	T memblock[N];
public:
	void setmember(int x, T value) {
		memblock[x] = value;
	}
	T getmember(int x) {
		return memblock[x];
	}
};
int main()
{
	Pair <double> y(2.23, 3.45);
	Sequence <Pair<double>, 5> myPairs;
    myPairs.setmember(0, y);
	cout << myPairs.getmember(0) << '\n';
	return 0;
}