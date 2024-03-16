#include <iostream>

using namespace std;

class TestData
{
public:
	TestData(const int data) : nData(data) {
		cout << "TestData(int)" << endl;
	}

	TestData(const TestData& rhs) : nData(rhs.nData) {
		cout << "TestData(const TestData&)" << endl;
	}

	~TestData() {
		cout << "~TestData( " << nData << " )" << endl;
	}

	int getData() const {
		return nData;
	}

	void setData(const int data) {
		nData = data;
	}

private:
	int nData = 0;
};

TestData testFunc(TestData rhs)
{
	cout << "testFunc()" << endl;
	rhs.setData(20);
	return rhs;
}

int main()
{
	testFunc(10);
	cout << "End of main()" << endl;
	return 0;
}
