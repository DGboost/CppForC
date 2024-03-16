#include <iostream>

void testFunc(int& rParam)
{
	rParam = 10;
}

int main()
{
	int data = 0;

	testFunc(data);
	std::cout << data << std::endl;

	return 0;
}
