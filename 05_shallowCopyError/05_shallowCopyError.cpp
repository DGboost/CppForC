#include <iostream>

using namespace std;

class MyData
{
public:
	MyData(const int data) {
		pData = new int;
		*pData = data;
	}

	//~MyData() {
	//	delete pData;
	//}

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
	MyData b(a);

	cout << a.getData() << endl;
	cout << b.getData() << endl;

	return 0;
}