#include <iostream>

using namespace std;

class MyData
{
public:
	MyData(int param) {
		cout << "MyData(int)" << endl;
		pData = new int(param);
	}

	MyData(const MyData& rhs) {
		cout << "MyData(const MyData& rhs)" << endl;
		pData = new int(*rhs.pData);
	}

	~MyData() {
		delete pData;
	}

	operator int() {
		return *pData;
	}

	MyData& operator=(const MyData& rhs) {
		cout << "operator=" << endl;
		delete pData;
		pData = new int(*rhs.pData);
		return *this;
	}

	MyData& operator=(MyData&& rhs) {
		cout << "operator=(Move)" << endl;
		pData = rhs.pData;
		rhs.pData = nullptr;
		return *this;
	}

private:
	int* pData = nullptr;
};

int main()
{
	MyData a(0), b(3), c(4);

	cout << "*** Before ***" << endl;
	a = (b + c);
	cout << "*** After ***" << endl;

	cout << a << endl;
	a = b;
	cout << a << endl;

	return 0;
}
