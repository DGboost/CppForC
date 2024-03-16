#include <iostream>

void swap(int& a, int& b)
{
	int tmp = a;
	a = b;
	b = tmp;
}

int main()
{
	int x = 10, y = 20;

	swap(x, y);

	std::cout << "x: " << x << std::endl;
	std::cout << "y: " << y << std::endl;

	return 0;
}