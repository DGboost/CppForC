#include <iostream>

using namespace std;

class MyData
{
public:
	MyData(int param) : nData(param) {}

	operator int() {
		return nData;
	}

	int operator++() {
		cout << "operator++()" << endl;
		return ++nData;
	}

	int operator++(int) {
		cout << "operator(int)" << endl;

		int data = nData;
		nData++;

		return data;
	}

private:
	int nData = 0;
};

int main()
{
	MyData a(10);

	cout << ++a << endl;
	cout << a++ << endl;
	cout << a << endl;

	return 0;
}
