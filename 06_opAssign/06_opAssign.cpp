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

	void operator=(const MyData& rhs) {
		delete pData;
		pData = new int(*rhs.pData);
	}

private:
	int* pData = nullptr;
};

int main()
{
	MyData a(0), b(5), c(10);

	a = b;
	//a.operator=(b);
	cout << a << endl;

	return 0;
}
