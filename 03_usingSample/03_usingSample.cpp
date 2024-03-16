#include <iostream>

using namespace std;

namespace Test
{
	int nData = 100;

	void testFunc()
	{
		cout << "Test::testFunc()" << endl;
	}
}

using namespace Test;


int main()
{
	testFunc();
	cout << nData << endl;

	return 0;
}