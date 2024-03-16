#include <iostream>

using namespace std;

class Test
{
public:
	Test() {
		cout << "Test::Test()" << endl;
	}

	~Test() {
		cout << "Test::~Test() " << endl;
	}
};

int main()
{
	cout << "Begin" << endl;

	Test* pTest = new Test();
	cout << "Test" << endl;

	delete pTest;
	cout << "End" << endl;
	return 0;
}