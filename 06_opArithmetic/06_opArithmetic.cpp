#include <iostream>

using namespace std;

class MyData
{
public:
	MyData(int param) : nData(param) {
		cout << "MyData(int)" << endl;
	}

	MyData(const MyData& rhs) : nData(rhs.nData) {
		cout << "MyData(const MyData&)" << endl;
	}

	MyData operator+(const MyData& rhs) const {
		cout << "operator+" << endl;
		MyData retVal(0);
		retVal.nData = nData + rhs.nData;
		return retVal;
	}

	MyData& operator=(const MyData& rhs) {
		cout << "operator=" << endl;
		nData = rhs.nData;
		return *this;
	}

	int getData() {
		return nData;
	}

private:
	int nData = 0;
};

MyData operator+(int left, MyData& rhs)
{
	MyData data(left + rhs.getData());
	return data;
}

int main()
{
	cout << "*** begin ***" << endl;

	MyData a(0), b(3), c(4);
	a = b + c;
	cout << a.getData() << endl;

	a = 4 + b;

	cout << "*** end ***" << endl;
	return 0;
}