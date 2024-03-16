#include <iostream>

void testFunc(int a)
{
	std::cout << "testFunc(int)" << std::endl;
}

void testFunc(int a, int b = 10)
{
	std::cout << "testFunc(int, int)" << std::endl;
}

int main()
{
	// testFunc(5);

	return 0;
}