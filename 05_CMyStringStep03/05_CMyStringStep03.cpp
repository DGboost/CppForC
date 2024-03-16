#include <iostream>
#include "CMyString.h"

using namespace std;

int main()
{
	CMyString hello;
	hello.setData("Hello");
	cout << hello.getData() << endl;

	CMyString world;
	world = hello;

	cout << hello.getData() << endl;

	return 0;
}
