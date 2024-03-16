#include <iostream>

using namespace std;

class TestData
{
public:
	TestData() {
		pnData = new int(0);
	}

	TestData(const TestData& rhs) {
		cout << "TestData(const TestData&)" << endl;
		this->setData(rhs.getData());
	}

	TestData(TestData&& rhs) noexcept {
		cout << "TestData(TestData&&) - move" << endl;
		delete pnData;
		pnData = rhs.pnData;
		rhs.pnData = nullptr;
	}

	~TestData()	{
		cout << "~TestData()" << endl;
		delete pnData;
	}

	void operator=(TestData& rhs) {
		cout << "operator=(TestData&)" << endl;
		setData(rhs.getData());
	}

	TestData& operator=(TestData&& rhs) noexcept {
		cout << "operator=(TestData&&) - move" << endl;
		delete pnData;
		pnData = rhs.pnData;
		rhs.pnData = nullptr;
		return *this;
	}

	int getData() const	{
		return *pnData;
	}

	void setData(int data) {
		if(pnData != nullptr)
			delete pnData;
		pnData = new int;
		*pnData = data;
	}

private:
	int *pnData = nullptr;
};

TestData getTestData(int param)
{
	cout << "getTestData()" << endl;
	TestData test;
	test.setData(param);
	return test;
}

int main()
{
	cout << "*** Before ***" << endl;

	TestData t1 = getTestData(5);

	TestData t2(std::move(getTestData(10)));

	TestData t3(t2);

	TestData result;
	result = getTestData(15);
	
	cout << "*** after ***" << endl;
	return 0;
}