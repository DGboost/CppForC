#include <iostream>

int main()
{
	int* pArr = new int[5];

	for(int i = 0; i < 5; ++i)
		pArr[i] = (i + 1) * 10;

	for(int i = 0; i < 5; ++i)
		std::cout << pArr[i] << std::endl;

	delete [] pArr;

	return 0;
}
