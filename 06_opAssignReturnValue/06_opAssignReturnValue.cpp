#include <iostream>

using namespace std;

class MyData
{
public:
	MyData(int param) {
		pData = new int(param);
	}

	~MyData() {
		delete pData;
	}

	operator int() {
		return *pData;
	}

	MyData& operator=(const MyData& rhs) {
		delete pData;
		pData = new int(*rhs.pData);
		return *this;
	}

private:
	int* pData = nullptr;
};

int main()
{
	MyData a(0), b(5), c(10);

	a = b = 10;
	a.operator=(b.operator=(10));
	cout << a << endl;
	cout << b << endl;

	return 0;
}
