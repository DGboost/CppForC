#include <iostream>
#include "CMyString.h"

using namespace std;

int main()
{
	CMyString hello;
	hello.setData("Hello");
	cout << hello.getData() << endl;
	cout << "length: " << hello.getLength() << endl;

	//*(hello.getData()) = 'A';
	return 0;
}
