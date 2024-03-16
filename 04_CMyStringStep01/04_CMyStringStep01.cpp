#include <iostream>
#include "CMyString.h"

using namespace std;

int main()
{
	CMyString hello;
	hello.setData("Hello");
	cout << hello.getData() << endl;

	hello.setData("World");
	cout << hello.getData() << endl;

	return 0;
}
