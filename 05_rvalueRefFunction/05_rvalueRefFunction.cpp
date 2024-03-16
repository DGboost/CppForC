#include <iostream>

using namespace std;

void testFunc(int& value)
{
	cout << "testFunc(int&)" << endl;
}

void testFunc(int&& value)
{
	cout << "testFunc(int&&)" << endl;
}

int main()
{
	int data(10);
	testFunc(data);
	testFunc(3);
	testFunc(3 + 4);

	return 0;
}
