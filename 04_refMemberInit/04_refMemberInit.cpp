#include <iostream>

using namespace std;

class Test
{
private:
	int& data;

public:
	Test(int& data) : data(data) {
	}

	int getData() {
		return data;
	}
};

int main()
{
	int a = 10;
	Test test(a);

	cout << test.getData() << endl;

	a = 20;
	cout << test.getData() << endl;

	return 0;
}