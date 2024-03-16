#include <iostream>

using namespace std;

class TestData
{
public:
	TestData(int param) : nData(param) {
		cout << "TestData(int)" << endl;
	}

	TestData(const TestData& rhs) {
		cout << "TestData(const TestData&)" << endl;
	}

	operator int(void) {
		return nData;
	}

	int getData() {
		return nData;
	}

	void setData(int param) {
		nData = param;
	}

private:
	int nData = 0;
};


int main()
{
	TestData a(5);
	cout << a.getData() << endl;

	cout << a << endl;
	cout << (int)a << endl;
	cout << static_cast<int>(a) << endl;

	return 0;
}
