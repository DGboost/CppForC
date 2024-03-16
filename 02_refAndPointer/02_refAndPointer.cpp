#include <iostream>

int main()
{
	int data = 10;

	int& ref = data;
	ref = 20;
	std::cout << data << std::endl;

	int* pData = &data;
	*pData = 30;
	std::cout << data << std::endl;

	return 0;
}
