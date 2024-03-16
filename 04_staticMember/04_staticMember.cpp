#include <iostream>

using namespace std;

class Test
{
public:
	Test(int data) : nData(data) {
		nCount++;
	}

	int getData() {
		return nData;
	}

	void resetCount() {
		nCount = 0;
	}

	static int getCount() {
		return nCount;
	}

private:
	int nData = 0;
	static int nCount;
};

int Test::nCount = 0;

int main()
{
	Test a(5), b(10);

	cout << a.getCount() << endl;
	b.resetCount();

	cout << Test::getCount() << endl;

	return 0;
}