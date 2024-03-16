#include <iostream>

using namespace std;

int data = 200;

namespace Test
{
	int data = 100;

	void testFunc() {
		cout << data << endl;
	}
}

int main()
{
	Test::testFunc();
	return 0;
}