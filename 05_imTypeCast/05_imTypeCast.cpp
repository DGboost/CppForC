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

	int getData() {
		return nData;
	}
	
	operator int(void) {
		return nData;
	}

	void setData(int param) {
		nData = param;
	}

private:
	int nData = 0;
};

void testFunc(TestData param)
{
	cout << "TestFunc(): " << param.getData() << endl;
}

int main()
{
	testFunc(5);
	return 0;
}
