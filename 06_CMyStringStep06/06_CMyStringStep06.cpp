#include <iostream>
#include "CMyString.h"

using namespace std;

int main()
{
	CMyString hello("Hello ");
	CMyString world("World");

	world.append(nullptr);

	cout << hello + world << endl;
	cout << "(const char[])Hello" + world << endl;

	return 0;
}
