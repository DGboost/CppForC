#include <iostream>

int testFunc(int param = 10)
{
	return param;
}

int main()
{
	std::cout << testFunc() << std::endl;
	std::cout << testFunc(20) << std::endl;

	return 0;
}