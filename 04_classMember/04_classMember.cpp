#include <iostream>

using namespace std;

class Test
{
public:
	Test() {
		data = 10;
	}

	int data;

	void printData()
	{
		cout << data << endl;
	}
};

int main()
{
	Test test;
	test.printData();

	return 0;
}