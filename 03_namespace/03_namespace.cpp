#include <iostream>

namespace Test
{
	int data = 100;

	void testFunc()
	{
		std::cout << "Test::TestFunc()" << std::endl;
	}
}

int main()
{
	Test::testFunc();
	std::cout << Test::data << std::endl;

	return 0;
}