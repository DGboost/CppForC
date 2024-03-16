#include <iostream>

int testFunc(int param1, int param2 = 2)
{
	return (param1 * param2);
}

int main()
{
	std::cout << testFunc(10) << std::endl;
	std::cout << testFunc(10, 5) << std::endl;

	return 0;
}