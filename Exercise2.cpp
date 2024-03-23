/*#include<iostream>
using namespace std;
template<typename t>
class Pair {
	t* values = new t[2];
public:
	Pair(t n1, t n2) {
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
	}t GetMin() {
		if (values[0] < values[1]) {
			return values[0];
		}
		else {
			return values[1];
		}
	}
};
int main()
{
	Pair<double> myobject(1.012, 1.01234);
	cout << myobject.GetMax();
	return 0;
}*/