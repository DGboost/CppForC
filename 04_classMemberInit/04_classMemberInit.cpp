#include <iostream>

using namespace std;

class Test
{
public:
	Test() : data1(10), data2(20) {
	}

	int data1;
	int data2;

	void printData();
};

void Test::printData()
{
	cout << data1 << endl;
	cout << data2 << endl;
}

int main()
{
	Test test;
	test.printData();

	return 0;
}