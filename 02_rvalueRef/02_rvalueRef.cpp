#include <iostream>

int testFunc(int param)
{
	int result = param * 2;
	return result;
}

int main()
{
	int input = 0;

	std::cout << "Input number: ";
	std::cin >> input;

	int&& rData = (input + 5);
	std::cout << rData << std::endl;

	int&& result = testFunc(10);

	result += 10;
	std::cout << result << std::endl;

	return 0;
}