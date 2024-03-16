#include <iostream>

using namespace std;

class TestFunc
{
public:
	TestFunc() = default;
	~TestFunc() = default;

	int operator()(int a, int b) {
		return a + b;
	}

	int operator()(void) {
		return 0;
	}
};

void testForTest(TestFunc& param)
{
	cout << param(5, 10) << endl;
}

int main()
{
	TestFunc test;
	cout << test() << endl;
	cout << test(3, 4) << endl;

	::testForTest(test);
}

