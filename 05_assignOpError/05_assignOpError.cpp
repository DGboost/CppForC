#include <iostream>

using namespace std;

class MyData
{
public:
	MyData(const int data) {
		pData = new int;
		*pData = data;
	}

	~MyData() {
		delete pData;
	}

	MyData(const MyData& rhs) {
		pData = new int;
		*pData = *rhs.pData;
	}

	MyData& operator=(const MyData& rhs) {
		*pData = *rhs.pData;
		return *this;
	}

	int getData() const {
		if (pData)
			return *pData;

		return 0;
	}

private:
	int* pData = nullptr;
};

int main()
{
	MyData a(10);
	MyData b(20);

	a = b;

	cout << a.getData() << endl;
	cout << b.getData() << endl;

	return 0;
}